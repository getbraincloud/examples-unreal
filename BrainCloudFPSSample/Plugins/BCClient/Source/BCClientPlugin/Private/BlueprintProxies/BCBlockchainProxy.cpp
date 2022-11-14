// Copyright 2015 bitHeads, Inc. All Rights Reserved.


#include "BCBlockchainProxy.h"

#include "BCWrapperProxy.h"

UBCBlockchainProxy::UBCBlockchainProxy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UBCBlockchainProxy* UBCBlockchainProxy::GetBlockchainItems(UBrainCloudWrapper* in_braincloudWrapper,
                                                           FString in_integrationID, FString in_contextJson)
{
	UBCBlockchainProxy* Proxy = NewObject<UBCBlockchainProxy>();
	UBCWrapperProxy::GetBrainCloudInstance(in_braincloudWrapper)->getBlockchainService()->GetBlockchainItems(in_integrationID, in_contextJson, Proxy);
	return Proxy;
}

UBCBlockchainProxy* UBCBlockchainProxy::GetUniqs(UBrainCloudWrapper* in_braincloudWrapper, FString in_integrationID,
	FString in_contextJson)
{
	UBCBlockchainProxy* Proxy = NewObject<UBCBlockchainProxy>();
	UBCWrapperProxy::GetBrainCloudInstance(in_braincloudWrapper)->getBlockchainService()->GetUniqs(in_integrationID, in_contextJson, Proxy);
	return Proxy;
}
