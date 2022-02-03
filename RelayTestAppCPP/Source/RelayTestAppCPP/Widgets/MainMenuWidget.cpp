#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	JoinLobbyButton->OnClicked.AddDynamic(this, &UMainMenuWidget::GoToLoadingScreen);
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
}

void UMainMenuWidget::GoToLoadingScreen()
{
	FString LoadingMessage=TEXT("Joining Lobby...");
	GameInstance->SetUpLoadingScreen(3, FText::AsCultureInvariant(LoadingMessage), true);
	GameInstance->Interface->FindOrCreateLobby();
}
