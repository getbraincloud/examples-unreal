// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RelaySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API URelaySaveGame : public USaveGame
{
	GENERATED_BODY()

	URelaySaveGame();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LocalSettings")
	FLinearColor LocalUserColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LocalSettings")
	FText LocalUsername;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LocalSettings")
	FText LocalPassword;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LocalSettings")
	int ArrowColorIndex;
};
