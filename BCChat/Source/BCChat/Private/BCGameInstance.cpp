// Fill out your copyright notice in the Description page of Project Settings.

#include "BCGameInstance.h"
#include <BrainCloudFunctionLibrary.h>
#include <BCClientPlugin/Private/BlueprintProxies/BCWrapperProxy.h>

void UBCGameInstance::Init()
{
    InitializeBrainCloud();

    //Run callbacks on a timer that loops
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

    FBrainCloudAppDataStruct appData = UBrainCloudFunctionLibrary::GetBCAppData();

    AppID = appData.AppId;
    SecretKey = appData.AppSecret;
    ServerURL = appData.ServerUrl;

    BrainCloudWrapper->initialize(ServerURL, SecretKey, AppID, BrainCloudWrapper->getClient()->getBrainCloudClientVersion());

    BrainCloudWrapper->getClient()->enableLogging(true);
}

void UBCGameInstance::BC_CallbackTick()
{
    if (BrainCloudWrapper == nullptr) return;
    BrainCloudWrapper->runCallbacks();
}
