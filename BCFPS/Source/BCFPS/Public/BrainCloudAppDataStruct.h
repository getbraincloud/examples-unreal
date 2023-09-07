// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BrainCloudAppDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FBrainCloudAppDataStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "brainCloud Init Params")
		FString ServerUrl = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "brainCloud Init Params")
		FString AppId = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "brainCloud Init Params")
		FString AppSecret = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "brainCloud Init Params")
		FString Version = "";
};
