// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
#include "OtherMatchUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API UOtherMatchUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	URelayUserData* UserData;

	UPROPERTY(meta=(BindWidget))
	UImage* Arrow_Image;
	
};
