// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayNetworkInterface.h"
#include "BrainCloudClient.h"
#include <ConvertUtilities.h>
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
	GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForJoinButton(false);
	bIsHost = false;
	bIsReady = false;
	
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->getRTTService()->enableRTT(BCRTTConnectionType::WEBSOCKET, Callback);
}

void ARelayNetworkInterface::UpdateLocalColor(int in_colorIndex)
{
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	GameInstance->SaveGameInstance->ArrowColorIndex = in_colorIndex;
	BrainCloudWrapper->getLobbyService()->updateReady(LobbyID, bIsReady, MakeJsonExtraString(), Callback);
}

void ARelayNetworkInterface::LocalUserSendEvent(FVector2D in_inputPosition, FString in_operation)
{
	bool isConnected = BrainCloudWrapper->getClient()->getRelayService()->isConnected();
	if(isConnected)
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
	FString extraJson = MakeJsonExtraString();
	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	
	BrainCloudWrapper->getLobbyService()->findOrCreateLobby
		(
			GameInstance->LobbyType,
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
		TSharedPtr<FJsonObject> lobbyObject = jsonPacket->GetObjectField(TEXT("data"));
		Address = lobbyObject->GetObjectField(TEXT("connectData"))->GetStringField(TEXT("address"));
		Port = lobbyObject->GetObjectField(TEXT("connectData"))->GetObjectField(TEXT("ports"))->GetNumberField(GameInstance->RelayProtocolString);
		Passcode = lobbyObject->GetStringField(TEXT("passcode"));
		if(bPresentAfterRelayStarted)
		{
			BrainCloudWrapper->getClient()->getRelayService()->registerRelayCallback(this);
			BrainCloudWrapper->getClient()->getRelayService()->registerSystemCallback(this);
			ConnectToRelay();
		}
		else
		{
			GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForJoinButton(true);
			GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForStartButton(false);
		}
		bPresentAfterRelayStarted = false;
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
		else if(operation.Equals(TEXT("CONNECT")))
		{
			GameInstance->bIsLoading = false;
			SendUpdateReady();
		}
		else if(operation.Equals(TEXT("END_MATCH")))
		{
			if(!bEndMatchRequested)
			{
				GameInstance->SetUpLoadingScreen(3, FText::FromString(TEXT("Game Ended, Returning to Lobby...")), false);
			}
			BrainCloudWrapper->getClient()->getRelayService()->deregisterRelayCallback();
			BrainCloudWrapper->getClient()->getRelayService()->deregisterSystemCallback();
			BrainCloudWrapper->getClient()->getRelayService()->disconnect();
			//Start timer?
			GetWorld()->GetTimerManager().SetTimer
			(
				DelayTimerForEndMatchHandle,
				this,
				&ARelayNetworkInterface::DelayToFinishEndMatchLoading,
				EndMatchLoadingTime
			);
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
	Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
	BrainCloudWrapper->getClient()->getLobbyService()->updateReady(LobbyID, true, MakeJsonExtraString(), Callback);
}

void ARelayNetworkInterface::JoinMatch()
{
	bIsReady = true;
	bPresentAfterRelayStarted = true;
	BrainCloudWrapper->getRelayService()->registerRelayCallback(this);
	BrainCloudWrapper->getRelayService()->registerSystemCallback(this);
	ConnectToRelay();
}

void ARelayNetworkInterface::InitBrainCloud()
{
	BrainCloudWrapper = NewObject<UBrainCloudWrapper>();
	BrainCloudWrapper->AddToRoot();
    
    // this will be loaded from BrainCloudSettings.ini
    FString ConfigPath = FConfigCacheIni::NormalizeConfigIniPath(
            FPaths::ProjectConfigDir() + TEXT("BrainCloudSettings.ini"));

    if (GConfig) {
        FString Section = "Credentials";
        FConfigSection *ConfigSection = GConfig->GetSectionPrivate(*Section, false, true, ConfigPath);
        FConfigFile *ConfigFile = GConfig->FindConfigFile(*ConfigPath);
        
        AppID = ConfigSection->FindRef(TEXT("AppId")).GetValue();
        SecretKey = ConfigSection->FindRef(TEXT("AppSecret")).GetValue();
		ServerURL = ConfigSection->FindRef(TEXT("ServerUrl")).GetValue();
    }
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
	if(!ensure(GameInstance != nullptr))
	{
		GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForStartButton(bIsHost);
	}
	
	bIsReady = !bIsHost;
}

void ARelayNetworkInterface::CheckMembers(const TSharedPtr<FJsonObject>& in_jsonPacket)
{
	if(!BrainCloudWrapper->getRTTService()->isRTTEnabled()) return;
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
	FString stringForLobbyID = TEXT("Lobby ID: ");
	if(!ensure(GameInstance != nullptr))
	{
		GameInstance->GameWidget->LobbyID_Text->SetText(FText::FromString(stringForLobbyID + LobbyID));
	}
	auto lobbyObject = in_jsonPacket->GetObjectField(TEXT("lobby"));
	OwnerID = GetProfileIdFromCxId(lobbyObject->GetStringField(TEXT("ownerCxId")));
}

FString ARelayNetworkInterface::MakeJsonExtraString() const
{
	const FString beginningString = TEXT("{\"colorIndex\":");
	const FString colorIndexValue = FString::FromInt(GameInstance->SaveGameInstance->ArrowColorIndex) + TEXT(",");
	const FString userPresentString = TEXT("\"presentSinceStart\":");
	FString userPresentValue = bPresentAfterRelayStarted ? TEXT("\"true\"")  : TEXT("\"false\"");
	FString returnValue = beginningString + colorIndexValue + userPresentString + userPresentValue + TEXT("}");
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

void ARelayNetworkInterface::ConnectToRelay()
{
	bEndMatchRequested = false;
	//Connect to Relay with connect info provided above
	BrainCloudWrapper->getClient()->getRelayService()->connect
		(
			GameInstance->RelayProtocol,
			Address,
			Port,
			Passcode,
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

bool ARelayNetworkInterface::IsUserAuthenticated()
{
	if(BrainCloudWrapper)
	{
		return BrainCloudWrapper->getClient()->isAuthenticated();
	}
	return false;
}

void ARelayNetworkInterface::DelayToFinishLoadingScreen()
{
	GameInstance->bIsLoading = false;
	GetWorld()->GetTimerManager().ClearTimer(DelayTimerHandle);
}

void ARelayNetworkInterface::DelayToFinishEndMatchLoading()
{
	GameInstance->bIsLoading = false;
	GetWorld()->GetTimerManager().ClearTimer(DelayTimerForEndMatchHandle);
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

void ARelayNetworkInterface::EndMatch()
{
	GameInstance->SetUpLoadingScreen(3, FText::FromString(TEXT("Game Ended, Returning to Lobby...")), false);
	bEndMatchRequested = true;
	FString payload = TEXT("{\"op\":\"END_MATCH\"}");
	BrainCloudWrapper->getClient()->getRelayService()->endMatch(payload);
	UE_LOG(LogTemp, Log, TEXT("End Match request sent"));
}
