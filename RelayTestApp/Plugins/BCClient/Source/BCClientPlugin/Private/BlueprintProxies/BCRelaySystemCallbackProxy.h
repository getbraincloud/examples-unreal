// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#pragma once

#include "BCRelaySystemCallProxyBase.h"
#include "BCRelaySystemCallbackProxy.generated.h"

UCLASS(MinimalAPI)
class UBCRelaySystemCallbackProxy : public UBCRelaySystemCallProxyBase
{
	GENERATED_BODY()
public:
	UBCRelaySystemCallbackProxy(const FObjectInitializer &ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "BrainCloud|Relay")
	static UBCRelaySystemCallbackProxy *RegisterRelaySystemCallback(UBrainCloudWrapper *brainCloudWrapper);
};
