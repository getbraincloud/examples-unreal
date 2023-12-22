// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RelayTestApp.generated.h"

USTRUCT(BlueprintType)
struct FAppIds
{

    GENERATED_BODY()

    // this will be loaded from BrainCloudSettings.ini
    //    FAppIds()
    //    {
    //        FString ConfigPath = FConfigCacheIni::NormalizeConfigIniPath(
    //                FPaths::ProjectConfigDir() + TEXT("BrainCloudSettings.ini"));
    //
    //        if (GConfig) {
    //            FString Section = "Credentials";
    //            FConfigSection *ConfigSection = GConfig->GetSectionPrivate(*Section, false, true, ConfigPath);
    //            FConfigFile *ConfigFile = GConfig->FindConfigFile(*ConfigPath);
    //
    //
    //            appId = ConfigSection->FindRef(TEXT("AppId")).GetValue();
    //            secretKey = ConfigSection->FindRef(TEXT("AppSecret")).GetValue();
    //            serverUrl = ConfigSection->FindRef(TEXT("ServerUrl")).GetValue();
    //        }
    //    }

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
