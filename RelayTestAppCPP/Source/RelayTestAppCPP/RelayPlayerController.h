// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RelayGameData/RelayGameInstance.h"
#include "RelayPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API ARelayPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
public:
	void ChangeCursorTexture(bool in_changeToNormal);

	UPROPERTY()
	URelayGameInstance* GameInstance;
};
