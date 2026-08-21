#include "LobbyWidget.h"
#include "Components/TextBlock.h"
#include "Components/UniformGridSlot.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"

void ULobbyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartMatchButton->OnClicked.AddDynamic(this, &ULobbyWidget::StartButtonClicked);
	JoinMatchButton->OnClicked.AddDynamic(this, &ULobbyWidget::ULobbyWidget::JoinButtonClicked);
	LeaveLobbyButton->OnClicked.AddDynamic(this, &ULobbyWidget::LeaveButtonClicked);

	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
	JoinMatchButton->SetVisibility(ESlateVisibility::Hidden);
}

void ULobbyWidget::AdjustLocalUserColor(FLinearColor in_newColor, int in_arrowColorIndex)
{
	GameInstance->LocalUser->PlayerColor = in_newColor;
	GameInstance->SaveGameUserColor(in_newColor, in_arrowColorIndex);

	//Not sure if this should be this function or the one with _Implementation
	GameInstance->Interface->UpdateLocalColor(in_arrowColorIndex);
}

void ULobbyWidget::AdjustVisibilityForStartButton(bool bIsUserHost)
{
	if(StartMatchButton->IsValidLowLevel())
	{
		StartMatchButton->SetVisibility(bIsUserHost ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	}
}

void ULobbyWidget::AdjustVisibilityForJoinButton(bool bPresentSinceStart)
{
	if(JoinMatchButton->IsValidLowLevel())
	{
		JoinMatchButton->SetVisibility(bPresentSinceStart ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	}
}

void ULobbyWidget::StartButtonClicked()
{
	if(GameInstance->IsValidLowLevel())
	{
		GameInstance->SetUpLoadingScreen(4, FText::AsCultureInvariant(JoinMatchLoadingMessage), false);
		GameInstance->Interface->SendUpdateReady();
	}
}

void ULobbyWidget::JoinButtonClicked()
{
	GameInstance->SetUpLoadingScreen(4, FText::AsCultureInvariant(JoinMatchLoadingMessage), false);
	AdjustVisibilityForJoinButton(false);
	GameInstance->Interface->JoinMatch();
}

void ULobbyWidget::LeaveButtonClicked()
{
	GameInstance->Interface->LeaveLobby();
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(ReturnMenuLoadingMessage), false);
	GameInstance->Interface->StartLoadingTimer();
}

void ULobbyWidget::OnColourOptionClicked(int32 in_colourIndex, FLinearColor in_colour)
{
	AdjustLocalUserColor(in_colour, in_colourIndex);
}

void ULobbyWidget::PopulateColourOptions(const TArray<FLinearColor>& in_colours)
{
	Colors = in_colours;

	if(ColourOptionWidgetRef == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("ULobbyWidget::PopulateColourOptions - ColourOptionWidgetRef is not set. Assign WBP_ColourOption to it in WBP_Lobby's Class Defaults."));
		return;
	}

	ColourOptions_Panel->ClearChildren();
	for(int32 i = 0; i < Colors.Num(); ++i)
	{
		UColourOptionWidget* option = CreateWidget<UColourOptionWidget>(this, ColourOptionWidgetRef);
		option->SetupColourOption(i, Colors[i]);
		option->OnColourOptionClicked.AddDynamic(this, &ULobbyWidget::OnColourOptionClicked);

		UPanelSlot* panelSlot = ColourOptions_Panel->AddChild(option);
		if(UUniformGridSlot* gridSlot = Cast<UUniformGridSlot>(panelSlot))
		{
			gridSlot->SetRow(i / ColourOptionsPerRow);
			gridSlot->SetColumn(i % ColourOptionsPerRow);
		}
	}
}
