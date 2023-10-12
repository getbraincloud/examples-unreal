// Fill out your copyright notice in the Description page of Project Settings.


#include "GameWidget.h"

#include "Components/Button.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"

void UGameWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ClosePopUp_Button->OnClicked.AddDynamic(this, &UGameWidget::ClosePopUp);
	PopUpWindow->SetVisibility(ESlateVisibility::Hidden);
	RelayGameInstance = Cast<URelayGameInstance>(GetGameInstance());
	const FText Blank;
	LobbyID_Text->SetText(Blank);
	FString TextForAppID = TEXT("App ID: ");
	AppID_Text->SetText(FText::FromString(TextForAppID + RelayGameInstance->Interface->AppID));
}

void UGameWidget::SetUpPopUp(FText in_ErrorMessage)
{
	if(!ensure(ErrorMessage_Text != nullptr))
	{
		ErrorMessage_Text->SetText(in_ErrorMessage);
	}
	if(!ensure(PopUpWindow != nullptr))
	{
		PopUpWindow->SetVisibility(ESlateVisibility::Visible);
	}
}

void UGameWidget::ClosePopUp()
{
	if(!ensure(PopUpWindow != nullptr))
	{
		PopUpWindow->SetVisibility(ESlateVisibility::Hidden);
	}
	if(!ensure(RelayGameInstance != nullptr))
	{
		RelayGameInstance->bErrorOccurred = false;
	}
}