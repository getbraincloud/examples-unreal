// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ids.h"
#include "RelayTestApp.generated.h"

USTRUCT(BlueprintType)
struct FAppIds
{

    GENERATED_BODY()
    
    FAppIds()
    {
        serverUrl = BRAINCLOUD_SERVER_URL;
        secretKey = BRAINCLOUD_APP_SECRET;
        appId = BRAINCLOUD_APP_ID;
        
        if(appId=="")
            appId = getenv("BC_RELAYTESTAPP_APP_ID");
        if(secretKey=="")
            secretKey = getenv("BC_RELAYTESTAPP_APP_SECRET");
    }

    UPROPERTY(BlueprintReadWrite)
    FString serverUrl;
    UPROPERTY(BlueprintReadWrite)
    FString secretKey;
    UPROPERTY(BlueprintReadWrite)
    FString appId;
};
