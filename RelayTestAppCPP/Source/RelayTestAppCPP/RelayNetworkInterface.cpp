// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayNetworkInterface.h"
#include "BrainCloudClient.h"
#include "ConvertUtilities.h"
#include "Kismet/GameplayStatics.h"
#include "RelayGameData/RelayGameInstance.h"
#include "Widgets/GameWidget.h"
#include "Widgets/WidgetAddOns/OtherMatchUserWidget.h"

// Sets default values
ARelayNetworkInterface::ARelayNetworkInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ARelayNetworkInterface::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<URelayGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	GameInstance->Interface = this;
	
	InitBrainCloud();
}

// Called every frame
void ARelayNetworkInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(!ensure(BrainCloudWrapper != nullptr)) return;
	BrainCloudWrapper->runCallbacks();
}

void ARelayNetworkInterface::LoginUniversalBC_Implementation()
{
	FString userId = GameInstance->SaveGameInstance->LocalUsername.ToString();
	FString password = GameInstance->SaveGameInstance->LocalPassword.ToString();

	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	
	BrainCloudWrapper->authenticateUniversal(userId, password, true, Callback);
	UE_LOG(LogTemp, Warning, TEXT("Login Called"))
}

void ARelayNetworkInterface::FindOrCreateLobby()
{
	bIsHost = false;
	bIsReady = false;
	bCancelRequested = false;
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BCRTTConnectionType rttConnectType;
	switch(ConnectionType)
	{
		case BCRelayConnectionType::TCP:
			rttConnectType = BCRTTConnectionType::TCP;
			break;
		case BCRelayConnectionType::UDP:
			rttConnectType = BCRTTConnectionType::UDP;
			break;
		case BCRelayConnectionType::WEBSOCKET:
		default:
			rttConnectType = BCRTTConnectionType::WEBSOCKET;
			break;
	
	}
	BrainCloudWrapper->getRTTService()->enableRTT(rttConnectType, Callback);
}

void ARelayNetworkInterface::UpdateLocalColor(int in_colorIndex)
{
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->getLobbyService()->updateReady(LobbyID, bIsReady, AppendColorIndex(in_colorIndex), Callback);
}

void ARelayNetworkInterface::LocalUserSendEvent(FVector2D in_inputPosition, FString in_operation)
{
	if(BrainCloudWrapper->getClient()->getRelayService()->isConnected())
	{
		//Make json string to convert to bytes
		const FString beginningString = TEXT("{\"op\":") + in_operation + TEXT("\"data\":{");
		const FString xString = TEXT("\"x\":") + FString::FromInt(in_inputPosition.X) + TEXT(",");
		const FString yString = TEXT("\"y\":") + FString::FromInt(in_inputPosition.Y) + TEXT("}}");
		FString extraJson = beginningString + xString + yString;
		TArray<uint8> jsonData;
		jsonData.AddUninitialized(extraJson.Len());
		StringToBytes(extraJson,jsonData.GetData(),extraJson.Len());

		BrainCloudWrapper->getClient()->getRelayService()->send
			(
				jsonData,
				ToAllPlayersNetID,
				GameInstance->bIsReliable,
				GameInstance->bIsOrdered,
				BCRelayChannel::HighPriority1
			);
	}
}

void ARelayNetworkInterface::JoinLobbyCancelled()
{
	if(bRTTConnectionIsLive)
	{
		bRTTConnectionIsLive = false;
		Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
		BrainCloudWrapper->getLobbyService()->cancelFindRequest(TEXT("CursorPartyV2"), Callback);
	}
	else
	{
		DisconnectEverything();
		GameInstance->bIsLoading = false;
	}
}

void ARelayNetworkInterface::AuthenticateCallback()
{
	if(GameInstance->IsUsernameNew())
	{
		Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
		BrainCloudWrapper->getPlayerStateService()->updateUserName(GameInstance->LocalUser->Username.ToString(), Callback);
	}
	UE_LOG(LogTemp, Warning, TEXT("Authenticate Callback"));
	GameInstance->bIsLoading = false;
}

void ARelayNetworkInterface::FindLobby()
{
	bRTTConnectionIsLive = true;
	
	BrainCloudWrapper->getRTTService()->registerRTTLobbyCallback(this);
	
	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	FString extraJson = AppendColorIndex(GameInstance->SaveGameInstance->ArrowColorIndex);
	TArray<FString> otherUserCxIds;
	BrainCloudWrapper->getLobbyService()->findOrCreateLobby
		(
			"CursorPartyV2",
			76,
			1,
			AlgoJson,
			TEXT("{}"),
			2,
			false,
			extraJson,
			TEXT("all"),
			TEXT("{}"),
			otherUserCxIds,
			Callback
		);
	
}

void ARelayNetworkInterface::rttCallback(const FString& jsonData)
{
	//ToDo: Need to catch empty responses like this one {"packetId":3,"responses":[{"data":null,"status":200}]}
	// - perhaps use some ifEnsure statements to return when its a response we're not looking for.
	// - Also the check for operation.Compare doesn't really work the way I thought it was intended, operation string is empty yet I'm still getting the log...
	
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	const bool bResponse = FJsonSerializer::Deserialize(reader, jsonPacket);		

	if(!bResponse) return;
	if(!jsonPacket->TryGetField(TEXT("operation"))) return;
	
	FString operation = jsonPacket->GetStringField(TEXT("operation"));
	
	if(operation.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("Operation is empty...."));
		return;
	}
	
	auto data = jsonPacket->GetObjectField(TEXT("data"));
	if(operation.Equals(TEXT("MEMBER_JOIN")))
	{
		//Update IDs
		UpdateIDs(data);
		IsLocalUserHost(data);
		CheckMembers(data);
		GameInstance->bIsLoading = false;
		
		
	}
	else if(operation.Equals(TEXT("MEMBER_UPDATE")) ||
			operation.Equals(TEXT("MEMBER_LEFT")) ||
			operation.Equals(TEXT("STATUS_UPDATE")))
	{
		UpdateIDs(data);
		IsLocalUserHost(data);
		CheckMembers(data);
		
		UE_LOG(LogTemp, Warning, TEXT("Member List Update"));
	}
	else if(operation.Equals(TEXT("STARTING")))
	{
		FString loadingMessage = TEXT("Joining a match...."); 
		GameInstance->SetUpLoadingScreen(4, FText::AsCultureInvariant(loadingMessage), false);

		UE_LOG(LogTemp, Warning, TEXT("Loading screen for Match..."));
	}
	else if(operation.Equals(TEXT("ROOM_READY")))
	{
		GameInstance->bIsLoading = false;
		BrainCloudWrapper->getClient()->getRelayService()->registerRelayCallback(this);
		BrainCloudWrapper->getClient()->getRelayService()->registerSystemCallback(this);
		ConnectToRelay(jsonPacket);
		
		UE_LOG(LogTemp, Warning, TEXT("Load Finish for Match"));
	}
}

void ARelayNetworkInterface::relayCallback(int netId, const TArray<uint8>& bytes)
{
	CallbackNetID = netId;
	FString jsonData = BytesToString(bytes.GetData(),bytes.Num());
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	FJsonSerializer::Deserialize(reader, jsonPacket);
	if(jsonPacket->HasField(TEXT("op")))
	{
		FString operation = jsonPacket->GetStringField(TEXT("op"));
		FString incomingUserProfileId = GetProfileIDFromNetID(CallbackNetID, BrainCloudWrapper);
		if(operation.Equals(TEXT("move")))
		{
			for(ARelayUserData* user : GameInstance->ListOfUserObjects)
			{
				if(user->ProfileID.Equals(incomingUserProfileId))
				{
					FVector2D inputPosition = FVector2D::ZeroVector;
					inputPosition.X = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("x"));
					inputPosition.Y = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("y"));
					GameInstance->GameWidget->MatchWidget->MoveOtherUserCursor(inputPosition, incomingUserProfileId);
				}
			}
		}
		else if(operation.Equals(TEXT("shockwave")))
		{
			for(ARelayUserData* user : GameInstance->ListOfUserObjects)
			{
				if(user->ProfileID.Equals(incomingUserProfileId) && user->bShowShockwave)
				{
					FVector2D inputPosition = FVector2D::ZeroVector;
					inputPosition.X = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("x"));
					inputPosition.Y = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("y"));
					GameInstance->GameWidget->MatchWidget->SpawnMouseShockwave(inputPosition, user->PlayerColor, false);
				}
			}
		}
	}
}

void ARelayNetworkInterface::relaySystemCallback(const FString& jsonResponse)
{
	
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonResponse);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	FJsonSerializer::Deserialize(reader, jsonPacket);
	if(jsonPacket->HasField(TEXT("op")))
	{
		FString operation = jsonPacket->GetStringField(TEXT("op"));
		if(operation.Equals(TEXT("DISCONNECT")))
		{
			FString profileId = GetProfileIdFromString(jsonPacket->GetStringField(TEXT("cxId")));
			GameInstance->RemoveUserFromList(profileId);
			GameInstance->GameWidget->MatchWidget->RemoveUserFromList(profileId);
		}
	}
}

void ARelayNetworkInterface::relayConnectSuccess(const FString& jsonResponse)
{
	UE_LOG(LogTemp, Warning, TEXT("Connection Successful"));
}

void ARelayNetworkInterface::relayConnectFailure(const FString& errorMessage)
{
	FString middleString = " |||| JSON ERROR: ";
	FString appendString = middleString + errorMessage; 
	const FText jsonMessage = FText::AsCultureInvariant(appendString);
	GameInstance->GameWidget->SetUpPopUp(jsonMessage);
}

void ARelayNetworkInterface::SendUpdateReady()
{
	FString extraJson = AppendColorIndex(GameInstance->SaveGameInstance->ArrowColorIndex);
	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	BrainCloudWrapper->getClient()->getLobbyService()->updateReady(LobbyID, true, extraJson, Callback);
}

void ARelayNetworkInterface::InitBrainCloud()
{
	BrainCloudWrapper = NewObject<UBrainCloudWrapper>();
	BrainCloudWrapper->AddToRoot();
	BrainCloudWrapper->initialize(ServerURL,SecretKey,AppID,GetBrainCloudVersion());
	BrainCloudWrapper->getClient()->enableLogging(true);
	
	UE_LOG(LogTemp, Warning, TEXT("Wrapper Initialized"));
}

void ARelayNetworkInterface::IsLocalUserHost(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	/*if(!ensure(DataJsonObject->HasField(TEXT("lobby"))))
	{
		UE_LOG(LogTemp, Warning, TEXT("Data Json Object does not have Lobby field"));
		return;
	}*/

	auto lobbyObject = DataJsonObject->GetObjectField(TEXT("lobby"));
	auto members = lobbyObject->GetArrayField(TEXT("members"));
	if(members.Num() == 0) return;
	
	FString profileId;
	for(auto member : members)
	{
		auto object = member->AsObject();
		profileId = object->GetStringField("profileId");
		if(profileId.Equals(LocalProfileID))
		{
			bIsHost = profileId.Equals(OwnerID);
			UE_LOG(LogTemp, Warning, TEXT("Host checked..."));
		}
	}
	GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForStartButton(bIsHost);
	bIsReady = !bIsHost;

	UE_LOG(LogTemp, Warning, TEXT("Figured out who is hosting..."));
}

void ARelayNetworkInterface::CheckMembers(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	//Clearing Lists so we can repopulate members that are in lobby
	GameInstance->ListOfUserObjects.Empty();
	GameInstance->GameWidget->LobbyWidget->Lobby_ListView->ClearListItems();
	GameInstance->GameWidget->MatchWidget->Match_UserListView->ClearListItems();
	for(UOtherMatchUserWidget* userCursor : GameInstance->GameWidget->MatchWidget->UserCursors)
	{
		userCursor->RemoveFromParent();
	}
	GameInstance->GameWidget->MatchWidget->UserCursors.Empty();
	
	
	//Getting members to re-populate list with
	TSharedPtr<FJsonObject> lobbyObject = DataJsonObject->GetObjectField(TEXT("lobby"));
	auto members = lobbyObject->GetArrayField(TEXT("members"));
	if(members.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No members for Check Members"));
		return;
	}
	
	for(int i=0; i < members.Num(); ++i)
	{
		TSharedPtr<FJsonValue> jsonValue = members[i];
		TSharedPtr<FJsonObject> memberObject = jsonValue->AsObject();
		TSharedPtr<FJsonObject> extraJson = memberObject->GetObjectField(TEXT("extra"));
		
		//Use below variables to create user object and then add them to lists for match and lobby
		int memberColorIndex = extraJson->GetIntegerField(TEXT("colorIndex"));
		FLinearColor memberColor = DetermineColorIndex(memberColorIndex);
		FString memberUserName = memberObject->GetStringField(TEXT("name"));
		FString memberProfileId = memberObject->GetStringField(TEXT("profileId"));
		ARelayUserData* newMember = GameInstance->CreateUser
										(
											FText::AsCultureInvariant(memberUserName),
											memberColor,
											memberProfileId
										);
		//Add new member to lists
		GameInstance->ListOfUserObjects.Add(newMember);
		GameInstance->GameWidget->LobbyWidget->Lobby_ListView->AddItem(newMember);
		GameInstance->GameWidget->MatchWidget->Match_UserListView->AddItem(newMember);
		//This check is necessary because local cursor is being handled within WBP_Match asset
		if(!memberProfileId.Equals(LocalProfileID))
		{
			UUserWidget* widget = CreateWidget(GameInstance->GameWidget->MatchWidget,OtherCursorWidgetReference);
			UOtherMatchUserWidget* newUserCursor = Cast<UOtherMatchUserWidget>(widget);
			newUserCursor->Arrow_Image->SetVisibility(ESlateVisibility::HitTestInvisible);
			newUserCursor->AddToViewport(50);
			newUserCursor->UserData = newMember;
			GameInstance->GameWidget->MatchWidget->UserCursors.Add(newUserCursor);
			GameInstance->GameWidget->MatchWidget->MouseCursor_CanvasPanel->AddChildToCanvas(newUserCursor);
			UE_LOG(LogTemp, Warning, TEXT("Cursor set up"));
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Members Checked"));
}

void ARelayNetworkInterface::UpdateIDs(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	/*if(!ensure(DataJsonObject->HasField(TEXT("lobbyId"))))
	{
		UE_LOG(LogTemp, Warning, TEXT("Data Json Packet Not Valid"));
		return;
	}*/
		
	LobbyID = DataJsonObject->GetStringField("lobbyId");
	auto lobbyObject = DataJsonObject->GetObjectField(TEXT("lobby"));
	OwnerID = GetProfileIdFromString(lobbyObject->GetStringField(TEXT("ownerCxId")));

	UE_LOG(LogTemp, Warning, TEXT("ID's Updated"));
}

FLinearColor ARelayNetworkInterface::DetermineColorIndex(int in_ColorIndex)
{
	return GameInstance->GameWidget->LobbyWidget->Colors[in_ColorIndex];
}

FString ARelayNetworkInterface::AppendColorIndex(int colorIndex)
{
	const FString beginningString = TEXT("{\"colorIndex\":");
	const FString colorIndexString = FString::FromInt(colorIndex) + TEXT("}");
	FString returnValue = beginningString + colorIndexString;
	return returnValue;
}

FString ARelayNetworkInterface::BytesToString(const uint8* in, int32 count)
{
	FString result2;
	result2.Empty(count);
	while (count)
	{
		result2 += ANSICHAR(*in);
		++in;
		--count;
	}
	
	return result2;
}

int32 ARelayNetworkInterface::StringToBytes(const FString& in_string, uint8* out_bytes, int32 in_maxBufferSize)
{
	int32 numBytes = 0;
	const TCHAR *charPos = *in_string;

	while (*charPos && numBytes < in_maxBufferSize)
	{
		out_bytes[numBytes] = (uint8)(*charPos);
		charPos++;
		++numBytes;
	}
	return numBytes;
}

void ARelayNetworkInterface::RemovingLeavingUser(FString in_memberID)
{
}

void ARelayNetworkInterface::DisconnectEverything()
{
	bRTTConnectionIsLive = false;
	BrainCloudWrapper->getClient()->getRelayService()->deregisterRelayCallback();
	BrainCloudWrapper->getClient()->getRelayService()->deregisterSystemCallback();
	BrainCloudWrapper->getClient()->getRTTService()->deregisterAllRTTCallbacks();
	BrainCloudWrapper->getClient()->getRelayService()->disconnect();
	BrainCloudWrapper->getClient()->getRTTService()->disableRTT();
	BrainCloudWrapper->getClient()->getRTTService()->deregisterRTTLobbyCallback();

	//ToDo: make a timer for one second for loading screen buffer

	GameInstance->bIsLoading = false;
}

void ARelayNetworkInterface::ConnectToRelay(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	auto dataObject = DataJsonObject->GetObjectField(TEXT("data"));
	FString address = dataObject->GetObjectField(TEXT("connectData"))->GetStringField(TEXT("address"));
	FString relayConnectType = "";
	switch(ConnectionType)
	{
		case BCRelayConnectionType::TCP:
			relayConnectType = TEXT("tcp");
			break;
		case BCRelayConnectionType::WEBSOCKET:
			relayConnectType = TEXT("ws");
			break;
		case BCRelayConnectionType::UDP:
			relayConnectType = TEXT("udp");
			break;
	}
	int port = dataObject->GetObjectField(TEXT("connectData"))->GetObjectField(TEXT("ports"))->GetNumberField(relayConnectType);
	FString passcode = dataObject->GetStringField(TEXT("passcode"));
	BrainCloudWrapper->getClient()->getRelayService()->connect
		(
			ConnectionType,
			address,
			port,
			passcode,
			LobbyID,
			this);
}

FString ARelayNetworkInterface::GetProfileIdFromString(FString in_data)
{
	in_data.RemoveAt(0,6);

	in_data.RemoveAt(36,70);
	return in_data;
}

FString ARelayNetworkInterface::GetProfileIDFromNetID(int in_netId, UBrainCloudWrapper* in_wrapper)
{
	return in_wrapper->getRelayService()->getProfileIdForNetId(in_netId);
}

FString ARelayNetworkInterface::GetBrainCloudVersion()
{
	BrainCloudClient* Client = BrainCloudWrapper->getBCClient();
	return Client->getBrainCloudClientVersion();
}
