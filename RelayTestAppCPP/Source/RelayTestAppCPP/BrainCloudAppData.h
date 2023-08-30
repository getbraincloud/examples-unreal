// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrainCloudAppData.generated.h"

UCLASS(Config=Game)
class DEDICATEDDEMO_API UBrainCloudAppData : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
	FString ServerUrl;

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
	FString AppId;

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
	FString AppSecret;

	UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
	FString Version;

};
