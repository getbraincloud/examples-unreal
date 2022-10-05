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
        
        if(appId==""){
            char* env = getenv("BC_RELAYTESTAPP_APP_ID");
            if(env != NULL)
                appId = env;
        }
        if(secretKey==""){
            char* env = getenv("BC_RELAYTESTAPP_APP_SECRET");
            if(env != NULL)
                secretKey = env;
        }
        if(serverUrl==""){
            char* env = getenv("BC_BRAINCLOUD_SERVER_URL");
            if(env != NULL)
                serverUrl = env;
        }
    }

    UPROPERTY(BlueprintReadWrite)
    FString serverUrl;
    UPROPERTY(BlueprintReadWrite)
    FString secretKey;
    UPROPERTY(BlueprintReadWrite)
    FString appId;
};
