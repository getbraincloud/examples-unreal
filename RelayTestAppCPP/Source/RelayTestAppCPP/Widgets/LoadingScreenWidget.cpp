#include "LoadingScreenWidget.h"

#include "Components/Button.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"

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
	if(GameInstance->bIsLoading && !isWaiting)
	{
		isWaiting = true;
	}
	else if(!GameInstance->bIsLoading && isWaiting)
	{
		GameInstance->FinishedLoading();
	}
}

void ULoadingScreenWidget::OnCancelButtonClicked()
{
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(CancelLoadingMessage), false);
	GameInstance->Interface->JoinLobbyCancelled();
}