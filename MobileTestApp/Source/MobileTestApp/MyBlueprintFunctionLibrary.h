// Copyright 2026 bitHeads, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Launch/Resources/Version.h"
#include "BrainCloudWrapper.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MOBILETESTAPP_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "System Information")
    static FString RunCppFunction(UBrainCloudWrapper* wrapper);	
};
