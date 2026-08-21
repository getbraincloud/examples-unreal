// Fill out your copyright notice in the Description page of Project Settings.

#include "ColourOptionWidget.h"

void UColourOptionWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ColourButton->OnClicked.AddDynamic(this, &UColourOptionWidget::HandleClicked);
	ColourButton->SetBackgroundColor(Colour);
}

void UColourOptionWidget::SetupColourOption(int32 in_colourIndex, FLinearColor in_colour)
{
	ColourIndex = in_colourIndex;
	Colour = in_colour;
	if(ColourButton != nullptr)
	{
		ColourButton->SetBackgroundColor(Colour);
	}
}

void UColourOptionWidget::HandleClicked()
{
	OnColourOptionClicked.Broadcast(ColourIndex, Colour);
}
