// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RelayPlayerController.generated.h"

/**
 *
 */
UCLASS()
class RELAYTESTAPPCPP_API ARelayPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	//Hides the native OS cursor while over the game area so the tinted UMatchWidget cursor widget can be shown instead
	void SetNativeCursorHidden(bool in_bHidden);
};
