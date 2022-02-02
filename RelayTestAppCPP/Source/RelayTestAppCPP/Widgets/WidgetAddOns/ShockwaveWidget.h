// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "ShockwaveWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API UShockwaveWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UImage* Shockwave_Image;
};
