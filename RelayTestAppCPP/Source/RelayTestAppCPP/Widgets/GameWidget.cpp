// Fill out your copyright notice in the Description page of Project Settings.


#include "GameWidget.h"

#include "Components/Button.h"

void UGameWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ClosePopUp_Button->OnClicked.AddDynamic(this, &UGameWidget::ClosePopUp);
	PopUpWindow->SetVisibility(ESlateVisibility::Hidden);
}

void UGameWidget::SetUpPopUp(FText in_ErrorMessage)
{
	ErrorMessage_Text->SetText(in_ErrorMessage);
	PopUpWindow->SetVisibility(ESlateVisibility::Visible);
}

void UGameWidget::ClosePopUp()
{
	PopUpWindow->SetVisibility(ESlateVisibility::Hidden);
	URelayGameInstance* GameInstance= Cast<URelayGameInstance>(GetGameInstance());
	GameInstance->bErrorOccurred = false;
}