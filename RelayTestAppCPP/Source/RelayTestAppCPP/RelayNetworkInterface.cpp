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

FString ARelayNetworkInterface::GetProfileIdFromString(FString data)
{
	data.RemoveAt(0,6);

	data.RemoveAt(36,70);
	return data;
}

FString ARelayNetworkInterface::GetProfileIDFromNetID(int netId, UBrainCloudWrapper* wrapper)
{
	return wrapper->getRelayService()->getProfileIdForNetId(netId);
}

FString ARelayNetworkInterface::GetBrainCloudVersion(UBrainCloudWrapper* wrapper)
{
	BrainCloudClient* Client = wrapper->getBCClient();
	return Client->getBrainCloudClientVersion();
}

