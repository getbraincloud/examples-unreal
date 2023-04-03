// Fill out your copyright notice in the Description page of Project Settings.

#include "NetworkInterface.h"

#include "BrainCloudClient.h"


FString ANetworkInterface::GetProfileIdFromString(FString data)
{
	data.RemoveAt(0,6);

	data.RemoveAt(36,70);
	return data;
}

FString ANetworkInterface::GetProfileIDFromNetID(int netId, UBrainCloudWrapper* wrapper)
{
	return wrapper->getRelayService()->getProfileIdForNetId(netId);
}

FString ANetworkInterface::GetBrainCloudVersion(UBrainCloudWrapper* wrapper)
{
	BrainCloudClient* Client = wrapper->getBCClient();
	return Client->getBrainCloudClientVersion();
}

FString ANetworkInterface::BCBytesToString(TArray<uint8> in_data)
{
	FString parsedMessage = ConvertUtilities::BCBytesToString(in_data.GetData(), in_data.Num());
	return parsedMessage;
}

TArray<uint8> ANetworkInterface::BCStringToBytes(const FString& in_string)
{
	TArray<uint8> data;
	data.AddUninitialized(in_string.Len());
	ConvertUtilities::BCStringToBytes(in_string, data.GetData(), in_string.Len());
	return data;
}