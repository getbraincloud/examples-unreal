// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "PaintSplatterWidget.generated.h"

/**
 * Spawned at the clicked position in the match screen. Splatter_Image's brush is set to a
 * 2D sprite in the corresponding widget blueprint; the colour is applied at runtime to match
 * the clicking player's chosen colour.
 */
UCLASS()
class RELAYTESTAPPCPP_API UPaintSplatterWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UImage* Splatter_Image;
};
