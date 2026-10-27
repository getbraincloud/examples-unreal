// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "ColourOptionWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnColourOptionClicked, int32, ColourIndex, FLinearColor, Colour);

/**
 * A single selectable colour swatch in the lobby's colour list, built and coloured at
 * runtime from the brainCloud "Colours" global property.
 */
UCLASS()
class RELAYTESTAPPCPP_API UColourOptionWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	void SetupColourOption(int32 in_colourIndex, FLinearColor in_colour);

	UPROPERTY(BlueprintAssignable)
	FOnColourOptionClicked OnColourOptionClicked;

	UPROPERTY(meta=(BindWidget))
	UButton* ColourButton;

	UPROPERTY(BlueprintReadOnly)
	int32 ColourIndex;

	UPROPERTY(BlueprintReadOnly)
	FLinearColor Colour;

private:
	UFUNCTION()
	void HandleClicked();
};
