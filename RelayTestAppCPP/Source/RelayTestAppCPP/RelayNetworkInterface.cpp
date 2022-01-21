// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayNetworkInterface.h"
#include "BrainCloudClient.h"
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
	
}

// Called every frame
void ARelayNetworkInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARelayNetworkInterface::LoginUniversalBC_Implementation(FString& in_Username, FString& in_Password)
{
	
}

void ARelayNetworkInterface::AuthenticateCallback(FString jsonData, FBC_ReturnData responseData)
{
	
}

void ARelayNetworkInterface::InitBrainCloud()
{
}

void ARelayNetworkInterface::OnFailureCallback(FString in_ErrorMessage, FString in_Operation)
{
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

