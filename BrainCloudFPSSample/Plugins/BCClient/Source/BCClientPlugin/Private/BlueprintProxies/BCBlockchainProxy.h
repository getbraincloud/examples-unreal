// Copyright 2015 bitHeads, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BCBlueprintCallProxyBase.h"
#include "BrainCloudWrapper.h"
#include "BCBlockchainProxy.generated.h"

/**
 * 
 */
UCLASS()
class UBCBlockchainProxy : public UBCBlueprintCallProxyBase
{
	GENERATED_BODY()

public:
	UBCBlockchainProxy(const FObjectInitializer &ObjectInitializer);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Blockchain")
	static UBCBlockchainProxy* GetBlockchainItems(UBrainCloudWrapper* in_braincloudWrapper, FString in_integrationID ,FString in_contextJson);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Blockchain")
	static UBCBlockchainProxy* GetUniqs(UBrainCloudWrapper* in_braincloudWrapper, FString in_integrationID ,FString in_contextJson);
};
