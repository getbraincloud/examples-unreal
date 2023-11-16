// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrainCloudWrapper.h"
#include "Engine/GameInstance.h"
#include "BCGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class BCCHAT_API UBCGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
	virtual void Shutdown() override;

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
		FString ServerURL;

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
		FString AppID;

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
		FString SecretKey;

	UPROPERTY(BlueprintReadOnly, Category = "BCGameInstance")
		UBrainCloudWrapper* BrainCloudWrapper;
private:
	void InitializeBrainCloud();
	void BC_CallbackTick();

	FTimerHandle bcCallbacksTimerHandle;
};
