// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayNetworkInterface.h"
#include "BrainCloudClient.h"
#include "Kismet/GameplayStatics.h"
#include "RelayGameData/RelayGameInstance.h"
#include "Widgets/GameWidget.h"

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

void ARelayNetworkInterface::FindOrCreateLobby_Implementation()
{
	bCancelRequested = false;
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->getRTTService()->enableRTT(ConnectionType, Callback);
}

void ARelayNetworkInterface::UpdateLocalColor_Implementation(int ColorIndex)
{
	Callback = new GameRelayCallback(BrainCloudWrapper, Callback, this);
	BrainCloudWrapper->getLobbyService()->updateReady(LobbyID, bIsReady, AppendColorIndex(ColorIndex), Callback);
}

void ARelayNetworkInterface::AuthenticateCallback()
{
	if(GameInstance->IsUsernameNew())
	{
		Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
		BrainCloudWrapper->getPlayerStateService()->updateUserName(GameInstance->LocalUser.Username.ToString(),Callback);
	}
	UE_LOG(LogTemp, Warning, TEXT("Authenticate Callback"));
	GameInstance->bIsLoading = false;
}

void ARelayNetworkInterface::EnableRTTCallback()
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
	const bool bResponse = FJsonSerializer::Deserialize(reader, jsonPacket);		// need to use this to deserialize the json into jsonPacket

	if(!bResponse) return;
	if(!jsonPacket->TryGetField(TEXT("operation"))) return;
	lobbyJson = &jsonPacket;
	FString operation = jsonPacket->GetStringField(TEXT("operation"));
	if(!ensure(!operation.IsEmpty())) return;
	
	/*
	 * Possible conditions to use
	 *  Blueprint way : FCString::Strcmp(*A, *B) == 0;
	 *  wcscmp((wchar_t*)MyString.Data.AllocatorInstance.Data,L"MyText") == 0
	 *  operation.Equals(TEXT("")		
	 */
	
	/*
	 *  Explanation why Compare isn't working: Compare returns 0 if equal, negative if less than, positive if greater than
	 *			aka: It does NOT return a bool...DOPE
	 */
	auto data = jsonPacket->GetObjectField(TEXT("data"));
	if(operation.Equals(TEXT("MEMBER_JOIN")))
	{
		//Update IDs
		UpdateIDs(data);
		IsLocalUserHost(data);
		CheckMembers(data);
		GameInstance->bIsLoading = false;
		
		UE_LOG(LogTemp, Warning, TEXT("ID's Updated"));
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

		UE_LOG(LogTemp, Warning, TEXT("Load Finish for Match"));
	}
}

void ARelayNetworkInterface::InitBrainCloud()
{
	BrainCloudWrapper = NewObject<UBrainCloudWrapper>();
	BrainCloudWrapper->AddToRoot();
	BrainCloudWrapper->initialize(ServerURL,SecretKey,AppID,GetBrainCloudVersion(BrainCloudWrapper));
	BrainCloudWrapper->getClient()->enableLogging(true);
	
	UE_LOG(LogTemp, Warning, TEXT("Wrapper Initialized"));
}

void ARelayNetworkInterface::IsLocalUserHost(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	if(!ensure(!DataJsonObject->HasField(TEXT("lobby"))))
	{
		UE_LOG(LogTemp, Warning, TEXT("Data Json Object does not have Lobby field"));
		return;
	}

	auto lobbyObject = DataJsonObject->GetObjectField(TEXT("lobby"));
	auto members = lobbyObject->GetArrayField(TEXT("memebers"));
	FString profileId;
	for(auto member : members)
	{
		auto object = member->AsObject();
		profileId = GetProfileIdFromString(object->GetStringField("profileId"));
		if(profileId.Equals(LocalProfileID))
		{
			bIsHost = profileId.Equals(OwnerID);
			bIsReady = !bIsHost;
			GameInstance->GameWidget->LobbyWidget->AdjustVisibilityForStartButton(bIsHost);
		}
	}
}

void ARelayNetworkInterface::CheckMembers(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	//Clearing Lists so we can repopulate members that are in lobby
	GameInstance->ListOfUserObjects.Empty();
	GameInstance->GameWidget->LobbyWidget->LobbyListView->ClearListItems();
	
}

void ARelayNetworkInterface::UpdateIDs(const TSharedPtr<FJsonObject>& DataJsonObject)
{
	if(!ensure(!DataJsonObject.IsValid()))
	{
		UE_LOG(LogTemp, Warning, TEXT("Data Json Packet Not Valid"));
		return;
	}
		
	LobbyID = DataJsonObject->GetStringField("lobbyId");
	auto lobbyObject = DataJsonObject->GetObjectField(TEXT("lobby"));
	OwnerID = GetProfileIdFromString(lobbyObject->GetStringField(TEXT("ownerCxId")));
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

void ARelayNetworkInterface::RemovingLeavingUser(FString in_memberID)
{
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

FString ARelayNetworkInterface::GetBrainCloudVersion(UBrainCloudWrapper* in_wrapper)
{
	BrainCloudClient* Client = in_wrapper->getBCClient();
	return Client->getBrainCloudClientVersion();
}
