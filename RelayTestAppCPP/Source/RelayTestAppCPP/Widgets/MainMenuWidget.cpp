#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Components/TextBlock.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"


void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	JoinLobbyButton->OnClicked.AddDynamic(this, &UMainMenuWidget::SetUpLoadingLobbyScreen);
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
}

void UMainMenuWidget::SetUpLoadingLobbyScreen()
{
	GameInstance->SetUpLoadingScreen(3, FText::AsCultureInvariant(LoadingMessage), true);
	GameInstance->Interface->FindOrCreateLobby();
}
