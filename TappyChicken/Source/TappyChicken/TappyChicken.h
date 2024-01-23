// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TappyChicken.generated.h"

USTRUCT(BlueprintType)
struct FAppIds
{

    GENERATED_BODY()

    FAppIds()
    {
        serverUrl = "";
        secretKey = "";
        appId = "";
    }

    UPROPERTY(BlueprintReadWrite)
    FString serverUrl;
    UPROPERTY(BlueprintReadWrite)
    FString secretKey;
    UPROPERTY(BlueprintReadWrite)
    FString appId;
};
