#include "SignInWidget.h"
#include "Components/TextBlock.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"


void USignInWidget::NativeConstruct()
{
	Super::NativeConstruct();
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
}
