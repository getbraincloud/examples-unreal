#include "LobbyWidget.h"

void ULobbyWidget::AdjustVisibilityForStartButton(bool bIsUserHost)
{
	StartMatchButton->SetVisibility(bIsUserHost ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	
}
