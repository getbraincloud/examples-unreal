#include "LoadingScreenWidget.h"

#include "Components/Button.h"

void ULoadingScreenWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	this->bHasScriptImplementedTick = true;
	Cancel_Button->OnClicked.AddDynamic(this, &ULoadingScreenWidget::OnCancelButtonClicked);
}

void ULoadingScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
}

void ULoadingScreenWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(GameInstance->IsLoading && !isWaiting)
	{
		isWaiting = true;
	}
	else if(!GameInstance->IsLoading && isWaiting)
	{
		GameInstance->FinishedLoading(CancelNextState);
		CancelNextState = false;
	}
}

void ULoadingScreenWidget::OnCancelButtonClicked()
{
	CancelNextState = true;
}