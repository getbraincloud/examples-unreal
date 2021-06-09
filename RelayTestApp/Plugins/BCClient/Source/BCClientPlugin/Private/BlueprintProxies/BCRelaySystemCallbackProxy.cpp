// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#include "BCRelaySystemCallbackProxy.h"
#include "BCClientPluginPrivatePCH.h"
#include "BCWrapperProxy.h"
#include "BrainCloudWrapper.h"

UBCRelaySystemCallbackProxy::UBCRelaySystemCallbackProxy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UBCRelaySystemCallbackProxy *UBCRelaySystemCallbackProxy::RegisterRelaySystemCallback(UBrainCloudWrapper* brainCloudWrapper)
{
	UBCRelaySystemCallbackProxy *Proxy = NewObject<UBCRelaySystemCallbackProxy>();
	UBCWrapperProxy::GetBrainCloudInstance(brainCloudWrapper)->getRelayService()->registerRelaySystemCallback(Proxy);
	return Proxy;
}
