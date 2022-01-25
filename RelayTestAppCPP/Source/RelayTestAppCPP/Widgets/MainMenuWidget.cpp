#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	JoinLobbyButton->OnClicked.AddDynamic(this, &UMainMenuWidget::GoToLoadingScreen);
	
}

void UMainMenuWidget::GoToLoadingScreen()
{
	URelayGameInstance* GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	FString LoadingMessage=TEXT("Joining Lobby...");
	GameInstance->SetUpLoadingScreen(3, FText::AsCultureInvariant(LoadingMessage), true);
}
