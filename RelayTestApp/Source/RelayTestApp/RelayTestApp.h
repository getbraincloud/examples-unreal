// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RelayTestApp.generated.h"

USTRUCT(BlueprintType)
struct FAppIds
{

    GENERATED_BODY()

    // this will be loaded from BrainCloudSettings.ini
    FAppIds()
    {
        appId = "";
        secretKey = "";
        serverUrl = "";
    }

    UPROPERTY(BlueprintReadWrite)
    FString serverUrl;
    UPROPERTY(BlueprintReadWrite)
    FString secretKey;
    UPROPERTY(BlueprintReadWrite)
    FString appId;
};
