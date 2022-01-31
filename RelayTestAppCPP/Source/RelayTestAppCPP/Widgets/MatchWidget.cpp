#include "MatchWidget.h"

void UMatchWidget::NativeConstruct()
{
	Super::NativeConstruct();
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
}
