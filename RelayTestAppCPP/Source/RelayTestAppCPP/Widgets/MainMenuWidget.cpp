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
	RelayGameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(RelayGameInstance->Interface->GetBrainCloudVersion()));
}

void UMainMenuWidget::SetUpLoadingLobbyScreen()
{
	RelayGameInstance->SetUpLoadingScreen(3, FText::AsCultureInvariant(LoadingMessage), true);
	RelayGameInstance->Interface->FindOrCreateLobby();
}
