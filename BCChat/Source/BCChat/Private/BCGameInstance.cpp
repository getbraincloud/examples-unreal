// Fill out your copyright notice in the Description page of Project Settings.

#include "BCGameInstance.h"

void UBCGameInstance::Init()
{
    InitializeBrainCloud();

    GetWorld()->GetTimerManager().SetTimer(
        bcCallbacksTimerHandle,
        this,
        &UBCGameInstance::BC_CallbackTick,
        0.0001f,
        true,
        0.0f
    );

	Super::Init();
}

void UBCGameInstance::Shutdown()
{
    GetWorld()->GetTimerManager().ClearTimer(bcCallbacksTimerHandle);

    //Disconnect brainCloud RTT and clear callbacks
    if (BrainCloudWrapper != nullptr) {
        if (BrainCloudWrapper->getRelayService()->isConnected())
            BrainCloudWrapper->getRelayService()->disconnect();
    }

    Super::Shutdown();
}

void UBCGameInstance::InitializeBrainCloud()
{
	BrainCloudWrapper = NewObject<UBrainCloudWrapper>();
	BrainCloudWrapper->AddToRoot();

    FString ConfigPath = FConfigCacheIni::NormalizeConfigIniPath(
        FPaths::ProjectConfigDir() + TEXT("BrainCloudSettings.ini"));

    if (GConfig) {
        FString Section = "Credentials";
        FConfigSection* ConfigSection = GConfig->GetSectionPrivate(*Section, false, true, ConfigPath);
        FConfigFile* ConfigFile = GConfig->FindConfigFile(*ConfigPath);

        AppID = ConfigSection->FindRef(TEXT("AppId")).GetValue();
        SecretKey = ConfigSection->FindRef(TEXT("AppSecret")).GetValue();
        ServerURL = ConfigSection->FindRef(TEXT("ServerUrl")).GetValue();
    }
    BrainCloudWrapper->initialize(ServerURL, SecretKey, AppID, "1.0");

    BrainCloudWrapper->getClient()->enableLogging(true);

    //Run callbacks on a timer that loops
}

void UBCGameInstance::BC_CallbackTick()
{
    if (BrainCloudWrapper == nullptr) return;
    BrainCloudWrapper->runCallbacks();
}
