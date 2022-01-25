// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayNetworkInterface.h"
#include "BrainCloudClient.h"
#include "Kismet/GameplayStatics.h"
#include "RelayGameData/RelayGameInstance.h"
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

void ARelayNetworkInterface::AuthenticateCallback()
{
	if(GameInstance->IsUsernameNew())
	{
		Callback = new GameRelayCallback(BrainCloudWrapper,Callback,this);
		BrainCloudWrapper->getPlayerStateService()->updateUserName(GameInstance->LocalUser.Username.ToString(),Callback);
	}
	UE_LOG(LogTemp, Warning, TEXT("Authenticate Callback"));
	GameInstance->IsLoading = false;
}

void ARelayNetworkInterface::InitBrainCloud()
{
	BrainCloudWrapper = NewObject<UBrainCloudWrapper>();
	BrainCloudWrapper->AddToRoot();
	BrainCloudWrapper->initialize(ServerURL,SecretKey,AppID,GetBrainCloudVersion(BrainCloudWrapper));
	BrainCloudWrapper->getClient()->enableLogging(true);
	
	UE_LOG(LogTemp, Warning, TEXT("Wrapper Initialized"));
}

void ARelayNetworkInterface::UpdateIDs()
{
}

void ARelayNetworkInterface::IsLocalUserHost()
{
}

void ARelayNetworkInterface::CheckMembers()
{
}

FLinearColor ARelayNetworkInterface::DetermineColorIndex(int in_ColorIndex)
{
	//This is gonna be a nasty switch statement... yay
	return FLinearColor::Black;
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
