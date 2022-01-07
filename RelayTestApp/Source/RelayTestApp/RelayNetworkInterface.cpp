// Fill out your copyright notice in the Description page of Project Settings.

#include "RelayNetworkInterface.h"


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