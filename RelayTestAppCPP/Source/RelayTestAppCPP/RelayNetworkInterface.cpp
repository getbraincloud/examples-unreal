// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayNetworkInterface.h"
#include "BrainCloudClient.h"
#include <ConvertUtilities.h>
#include "Kismet/GameplayStatics.h"
#include "RelayGameData/RelayGameInstance.h"
#include "Widgets/GameWidget.h"
#include "Widgets/WidgetAddOns/OtherMatchUserWidget.h"
#include "ids.h"

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
	if(BrainCloudWrapper == nullptr) return;
	BrainCloudWrapper->runCallbacks();
}

void ARelayNetworkInterface::LoginUniversalBC()
{
	FString userId = GameInstance->SaveGameInstance->LocalUsername.ToString();
	FString password = GameInstance->SaveGameInstance->LocalPassword.ToString();

	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->authenticateUniversal(userId, password, true, Callback);
}

void ARelayNetworkInterface::FindOrCreateLobby()
{
	bIsHost = false;
	bIsReady = false;
	
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->getRTTService()->enableRTT(BCRTTConnectionType::WEBSOCKET, Callback);
}

void ARelayNetworkInterface::UpdateLocalColor(int in_colorIndex)
{
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->getLobbyService()->updateReady(LobbyID, bIsReady, MakeJsonStringForColorIndex(in_colorIndex), Callback);
}

void ARelayNetworkInterface::LocalUserSendEvent(FVector2D in_inputPosition, FString in_operation)
{
	if(BrainCloudWrapper->getClient()->getRelayService()->isConnected())
	{
		//Making json FString to convert to bytes
		const FString beginningString = TEXT("{\"op\":") + in_operation + TEXT("\"data\":{");
		const FString xString = TEXT("\"x\":") + FString::FromInt(in_inputPosition.X) + TEXT(",");
		const FString yString = TEXT("\"y\":") + FString::FromInt(in_inputPosition.Y) + TEXT("}}");
		FString extraJson = beginningString + xString + yString;
		TArray<uint8> jsonData;
		jsonData.AddUninitialized(extraJson.Len());
		ConvertUtilities::BCStringToBytes(extraJson,jsonData.GetData(),extraJson.Len());

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
	}
}

void ARelayNetworkInterface::AuthenticateCallback()
{
	if(GameInstance->IsUsernameNew())
	{
		Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
		BrainCloudWrapper->getPlayerStateService()->updateUserName(GameInstance->LocalUser->Username.ToString(), Callback);
	}
	GameInstance->bIsLoading = false;
}

void ARelayNetworkInterface::FindLobby()
{
	bRTTConnectionIsLive = true;
	
	BrainCloudWrapper->getRTTService()->registerRTTLobbyCallback(this);
	
	TArray<FString> otherUserCxIds;
	FString extraJson = MakeJsonStringForColorIndex(GameInstance->SaveGameInstance->ArrowColorIndex);
	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	
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
	//Deserializing jsonData to then get fields from the json
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	const bool bResponse = FJsonSerializer::Deserialize(reader, jsonPacket);
	
	if(!bResponse)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to deserialize jsonData in rtt callback...."));
		return;
	}
	
	if(!jsonPacket->HasField(TEXT("operation")))
	{
		UE_LOG(LogTemp, Warning, TEXT("Operation field in rtt callback response wasn't present...."));
		return;
	}
	FString operation = jsonPacket->GetStringField(TEXT("operation"));
	
	TSharedPtr<FJsonObject> data = jsonPacket->GetObjectField(TEXT("data"));
	//Checking what operation response is meant for
	if(operation.Equals(TEXT("MEMBER_JOIN")))
	{
		//Updating members and stopping loading screen here
		UpdateIDs(data);
		IsLocalUserHost(data);
		CheckMembers(data);
		GameInstance->bIsLoading = false;
	}
	else if(operation.Equals(TEXT("MEMBER_UPDATE")) ||
			operation.Equals(TEXT("MEMBER_LEFT")) ||
			operation.Equals(TEXT("STATUS_UPDATE")))
	{
		//Already in lobby screen and someone has made an update for lobby
		UpdateIDs(data);
		IsLocalUserHost(data);
		CheckMembers(data);
	}
	else if(operation.Equals(TEXT("STARTING")))
	{
		//Setting up loading screen to transition from lobby -> match
		FString loadingMessage = TEXT("Joining a match...."); 
		GameInstance->SetUpLoadingScreen(4, FText::AsCultureInvariant(loadingMessage), false);
	}
	else if(operation.Equals(TEXT("ROOM_READY")))
	{
		//Match screen is ready to be loaded in + set up important relay functions
		GameInstance->bIsLoading = false;
		BrainCloudWrapper->getClient()->getRelayService()->registerRelayCallback(this);
		BrainCloudWrapper->getClient()->getRelayService()->registerSystemCallback(this);
		ConnectToRelay(jsonPacket);
	}
}

void ARelayNetworkInterface::relayCallback(int netId, const TArray<uint8>& bytes)
{
	FString jsonData = ConvertUtilities::BCBytesToString(bytes.GetData(),bytes.Num());
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	
	bool bResponse = FJsonSerializer::Deserialize(reader, jsonPacket);
	if(!bResponse)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to deserialize jsonData in relay callback...."));
		return;
	}

	if(!jsonPacket->HasField(TEXT("op")))
	{
		// No need for logging here, we will get a blank response to know brainCloud servers has received the "FIND_OR_CREATE_LOBBY" request.
		// the response should look like this: {"packetId":3,"responses":[{"data":null,"status":200}]}
		return;
	}
	
	CallbackNetID = netId;
	FString operation = jsonPacket->GetStringField(TEXT("op"));
	FString incomingUserProfileId = BrainCloudWrapper->getRelayService()->getProfileIdForNetId(CallbackNetID);
		
	if(operation.Equals(TEXT("move")))
	{
		for(ARelayUserData* user : GameInstance->ListOfUserObjects)
		{
			if(user->ProfileID.Equals(incomingUserProfileId))
			{
				FVector2D inputPosition;
				inputPosition.X = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("x"));
				inputPosition.Y = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("y"));
				GameInstance->GameWidget->MatchWidget->MoveOtherUserCursor(inputPosition, incomingUserProfileId);
				break;
			}
		}
	}
	else if(operation.Equals(TEXT("shockwave")))
	{
		for(ARelayUserData* user : GameInstance->ListOfUserObjects)
		{
			if(user->ProfileID.Equals(incomingUserProfileId) && user->bShowShockwave)
			{
				FVector2D inputPosition;
				inputPosition.X = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("x"));
				inputPosition.Y = jsonPacket->GetObjectField(TEXT("data"))->GetNumberField(TEXT("y"));
				GameInstance->GameWidget->MatchWidget->SpawnMouseShockwave(inputPosition, user->PlayerColor, false);
				break;
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
		//Checking if someone has left the match
		if(operation.Equals(TEXT("DISCONNECT")))
		{
			FString profileId = GetProfileIdFromCxId(jsonPacket->GetStringField(TEXT("cxId")));
			GameInstance->RemoveUserFromList(profileId);
			GameInstance->GameWidget->MatchWidget->RemoveUserFromList(profileId);
		}
	}
}

void ARelayNetworkInterface::relayConnectFailure(const FString& errorMessage)
{
	FString middleString = " || JSON ERROR: ";
	FString appendString = middleString + errorMessage; 
	const FText jsonMessage = FText::AsCultureInvariant(appendString);
	GameInstance->GameWidget->SetUpPopUp(jsonMessage);
}

void ARelayNetworkInterface::SendUpdateReady()
{
	FString extraJson = MakeJsonStringForColorIndex(GameInstance->SaveGameInstance->ArrowColorIndex);
	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	BrainCloudWrapper->getClient()->getLobbyService()->updateReady(LobbyID, true, extraJson, Callback);
}

void ARelayNetworkInterface::InitBrainCloud()
{
	BrainCloudWrapper = NewObject<UBrainCloudWrapper>();
	BrainCloudWrapper->AddToRoot();
    
    FString appId = BRAINCLOUD_APP_ID;
    if(appId=="")
        appId = getenv("BC_RELAYTESTAPP_APP_ID");
    FString secretKey = BRAINCLOUD_APP_SECRET;
    if(secretKey=="")
        secretKey = getenv("BC_RELAYTESTAPP_APP_SECRET");

	//BrainCloudWrapper->initialize(BRAINCLOUD_SERVER_URL, secretKey, appId, "1.0");
	BrainCloudWrapper->initialize(ServerURL, SecretKey, AppID, "1.0");
	BrainCloudWrapper->getClient()->enableLogging(true);
}

void ARelayNetworkInterface::IsLocalUserHost(const TSharedPtr<FJsonObject>& in_jsonPacket)
{
	if(!in_jsonPacket->HasField(TEXT("lobby")))
	{
		UE_LOG(LogTemp, Warning, TEXT("in_jsonPacket does not have Lobby field"));
		return;
	}

	TSharedPtr<FJsonObject> lobbyObject = in_jsonPacket->GetObjectField(TEXT("lobby"));
	TArray<TSharedPtr<FJsonValue>> members = lobbyObject->GetArrayField(TEXT("members"));
	if(members.Num() == 0) return;
	
	FString profileId;
	for(TSharedPtr<FJsonValue> member : members)
	{
		TSharedPtr<FJsonObject> object = member->AsObject();
		profileId = object->GetStringField("profileId");
		if(profileId.Equals(LocalProfileID))
		{
			bIsHost = profileId.Equals(OwnerID);
			break;
		}
	}
	GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForStartButton(bIsHost);
	bIsReady = !bIsHost;
}

void ARelayNetworkInterface::CheckMembers(const TSharedPtr<FJsonObject>& in_jsonPacket)
{
	//Clearing Lists to then repopulate members that are in lobby
	GameInstance->ListOfUserObjects.Empty();
	GameInstance->GameWidget->LobbyWidget->Lobby_ListView->ClearListItems();
	GameInstance->GameWidget->MatchWidget->Match_UserListView->ClearListItems();
	for(UOtherMatchUserWidget* userCursor : GameInstance->GameWidget->MatchWidget->UserCursors)
	{
		userCursor->RemoveFromParent();
	}
	GameInstance->GameWidget->MatchWidget->UserCursors.Empty();
	
	//Getting members to re-populate list with
	const TSharedPtr<FJsonObject> lobbyObject = in_jsonPacket->GetObjectField(TEXT("lobby"));
	
	auto members = lobbyObject->GetArrayField(TEXT("members"));
	if(members.Num() == 0) return;
	
	for(int i=0; i < members.Num(); ++i)
	{
		const TSharedPtr<FJsonValue> jsonValue = members[i];
		const TSharedPtr<FJsonObject> memberObject = jsonValue->AsObject();
		const TSharedPtr<FJsonObject> extraJson = memberObject->GetObjectField(TEXT("extra"));
		
		//Use below variables to create user object and then add them to lists for match and lobby
		int memberColorIndex = extraJson->GetIntegerField(TEXT("colorIndex"));
		FLinearColor memberColor = GameInstance->GameWidget->LobbyWidget->Colors[memberColorIndex];
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
		}
	}
}

void ARelayNetworkInterface::UpdateIDs(const TSharedPtr<FJsonObject>& in_jsonPacket)
{
	if(!in_jsonPacket->HasField(TEXT("lobbyId"))) return; 
		
	LobbyID = in_jsonPacket->GetStringField("lobbyId");
	auto lobbyObject = in_jsonPacket->GetObjectField(TEXT("lobby"));
	OwnerID = GetProfileIdFromCxId(lobbyObject->GetStringField(TEXT("ownerCxId")));
}

FString ARelayNetworkInterface::MakeJsonStringForColorIndex(int colorIndex)
{
	const FString beginningString = TEXT("{\"colorIndex\":");
	const FString colorIndexString = FString::FromInt(colorIndex) + TEXT("}");
	FString returnValue = beginningString + colorIndexString;
	return returnValue;
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

	StartLoadingTimer();
}

void ARelayNetworkInterface::ConnectToRelay(const TSharedPtr<FJsonObject>& in_jsonPacket)
{
	TSharedPtr<FJsonObject> lobbyObject = in_jsonPacket->GetObjectField(TEXT("data"));
	FString address = lobbyObject->GetObjectField(TEXT("connectData"))->GetStringField(TEXT("address"));
	
	int port = lobbyObject->GetObjectField(TEXT("connectData"))->GetObjectField(TEXT("ports"))->GetNumberField(TEXT("ws"));
	FString passcode = lobbyObject->GetStringField(TEXT("passcode"));

	//Connect to Relay with connect info provided above
	BrainCloudWrapper->getClient()->getRelayService()->connect
		(
			BCRelayConnectionType::WEBSOCKET,
			address,
			port,
			passcode,
			LobbyID,
			this
		);
}

FString ARelayNetworkInterface::GetProfileIdFromCxId(FString in_data)
{
	in_data.RemoveAt(0,6);
	in_data.RemoveAt(36,70);
	return in_data;
}

FString ARelayNetworkInterface::GetBrainCloudVersion()
{
	BrainCloudClient* Client = BrainCloudWrapper->getBCClient();
	return Client->getBrainCloudClientVersion();
}

void ARelayNetworkInterface::DelayToFinishLoadingScreen()
{
	GameInstance->bIsLoading = false;
	GetWorld()->GetTimerManager().ClearTimer(DelayTimerHandle);
}

void ARelayNetworkInterface::StartLoadingTimer()
{
	GetWorld()->GetTimerManager().SetTimer
			(
				DelayTimerHandle,
				this,
				&ARelayNetworkInterface::DelayToFinishLoadingScreen,
				LoadingTime
			);
}
