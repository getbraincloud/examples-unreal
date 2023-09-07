// Fill out your copyright notice in the Description page of Project Settings.


#include "BrainCloudFunctionLibrary.h"

FBrainCloudAppDataStruct UBrainCloudFunctionLibrary::GetBCAppData()
{
    FBrainCloudAppDataStruct Result;

    FString SectionName = TEXT("Credentials");
    FString Filename = TEXT("BrainCloudSettings.ini");

    FString ConfigPath = FConfigCacheIni::NormalizeConfigIniPath(FPaths::ProjectConfigDir() + *Filename);

    if (GConfig) {
        FConfigSection* ConfigSection = GConfig->GetSectionPrivate(*SectionName, false, true, ConfigPath);
        FConfigFile* ConfigFile = GConfig->FindConfigFile(*ConfigPath);

        if (ConfigFile->DoesSectionExist(*SectionName))
        {
            Result.AppId = ConfigSection->FindRef("AppId").GetValue();
            Result.AppSecret = ConfigSection->FindRef("AppSecret").GetValue();
            Result.Version = ConfigSection->FindRef("Version").GetValue();
            Result.ServerUrl = ConfigSection->FindRef("ServerUrl").GetValue();
        }
    }

    return Result;
}

void UBrainCloudFunctionLibrary::SetBCAppData(FBrainCloudAppDataStruct appData)
{
    FString SectionName = TEXT("Credentials");
    FString Filename = TEXT("BrainCloudSettings.ini");

    FString ConfigPath = FConfigCacheIni::NormalizeConfigIniPath(FPaths::ProjectConfigDir() + *Filename);


    if (!GConfig->DoesSectionExist(*SectionName, ConfigPath))
    {
        GConfig->EmptySection(*SectionName, ConfigPath);
    }

    GConfig->SetString(*SectionName, TEXT("AppId"), *appData.AppId, ConfigPath);
    GConfig->SetString(*SectionName, TEXT("AppSecret"), *appData.AppSecret, ConfigPath);
    GConfig->SetString(*SectionName, TEXT("Version"), *appData.Version, ConfigPath);
    GConfig->SetString(*SectionName, TEXT("ServerUrl"), *appData.ServerUrl, ConfigPath);

    GConfig->Flush(false, ConfigPath);

}
