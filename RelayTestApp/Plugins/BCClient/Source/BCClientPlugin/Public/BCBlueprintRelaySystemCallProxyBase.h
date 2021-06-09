// Copyright 2018 bitHeads, Inc. All Rights Reserved.
#pragma once

#include "IRelaySystemCallback.h"
#include "BCBlueprintRelaySystemCallProxyBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBrainCloudRelaySystemCallbackDelegate, FString, jsonResponse);

UCLASS(MinimalAPI)
class UBCBlueprintRelaySystemCallProxyBase : public UObject, public IRelaySystemCallback
{
	GENERATED_BODY()
public:
	UBCBlueprintRelaySystemCallProxyBase(const FObjectInitializer &ObjectInitializer) { this->AddToRoot(); }

	//Response delegates
	UPROPERTY(BlueprintAssignable)
	FBrainCloudRelaySystemCallbackDelegate OnRelaySystemCallback;

	//callback
	virtual void relaySystemCallback(const FString& jsonResponse) override
	{
		OnRelaySystemCallback.Broadcast(jsonResponse);
	}
};
