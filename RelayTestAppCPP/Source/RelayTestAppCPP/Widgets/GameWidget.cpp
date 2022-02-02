// Fill out your copyright notice in the Description page of Project Settings.


#include "GameWidget.h"

#include "Components/Button.h"
#include "Components/CanvasPanelSlot.h"

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

void UGameWidget::MoveOtherUserCursor(FVector2D in_newPosition, FString in_profile)
{
	for(UOtherMatchUserWidget* user : MatchWidget->UserCursors)
	{
		if(user->UserData->ProfileID.Equals(in_profile) && IsValid(user))
		{
			user->Arrow_Image->SetVisibility(ESlateVisibility::HitTestInvisible);
			UCanvasPanelSlot* widgetSlot = Cast<UCanvasPanelSlot>(user->Slot);
			widgetSlot->SetPosition(FVector2D(in_newPosition.X, in_newPosition.Y));
		}
	}
}
