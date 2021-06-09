// Copyright 2018 bitHeads, Inc. All Rights Reserved.
#pragma once

#include "IRelaySystemCallback.h"
#include "BCRelaySystemCallProxyBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBrainCloudRelaySystemCallbackDelegate, FString, jsonResponse);

UCLASS(MinimalAPI)
class UBCRelaySystemCallProxyBase : public UObject, public IRelaySystemCallback
{
	GENERATED_BODY()
public:
	UBCRelaySystemCallProxyBase(const FObjectInitializer &ObjectInitializer) { this->AddToRoot(); }

	//Response delegates
	UPROPERTY(BlueprintAssignable)
	FBrainCloudRelaySystemCallbackDelegate OnRelaySystemCallback;

	//callback
	void relaySystemCallback(const FString& jsonResponse)
	{
		OnRelaySystemCallback.Broadcast(jsonResponse);
	}
};
