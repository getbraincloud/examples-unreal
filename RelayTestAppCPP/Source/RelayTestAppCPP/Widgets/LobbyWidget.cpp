#include "LobbyWidget.h"
#include "Components/TextBlock.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"

void ULobbyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartMatchButton->OnClicked.AddDynamic(this, &ULobbyWidget::StartButtonClicked);
	LeaveLobbyButton->OnClicked.AddDynamic(this, &ULobbyWidget::LeaveButtonClicked);

	Black_Button->OnClicked.AddDynamic(this, &ULobbyWidget::BlackButtonClicked);
	Blue_Button->OnClicked.AddDynamic(this, &ULobbyWidget::BlueButtonClicked);
	Green_Button->OnClicked.AddDynamic(this, &ULobbyWidget::GreenButtonClicked);
	Grey_Button->OnClicked.AddDynamic(this, &ULobbyWidget::GreyButtonClicked);
	Orange_Button->OnClicked.AddDynamic(this, &ULobbyWidget::OrangeButtonClicked);
	Purple_Button->OnClicked.AddDynamic(this, &ULobbyWidget::PurpleButtonClicked);
	WhiteCyan_Button->OnClicked.AddDynamic(this, &ULobbyWidget::WhiteCyanButtonClicked);
	Yellow_Button->OnClicked.AddDynamic(this, &ULobbyWidget::YellowButtonClicked);
	
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
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
	StartMatchButton->SetVisibility(bIsUserHost ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void ULobbyWidget::StartButtonClicked()
{
	FString loadingMessage = TEXT("Joining a match... ");
	GameInstance->SetUpLoadingScreen(4, FText::AsCultureInvariant(loadingMessage), false);

	GameInstance->Interface->SendUpdateReady();
}

void ULobbyWidget::LeaveButtonClicked()
{
	FString loadingMessage = TEXT("Returning to Main Menu");
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(loadingMessage), false);

	GameInstance->Interface->DisconnectEverything();
}

void ULobbyWidget::BlackButtonClicked()
{
	AdjustLocalUserColor(Colors[0], 0);
}

void ULobbyWidget::PurpleButtonClicked()
{
	AdjustLocalUserColor(Colors[1], 1);
}

void ULobbyWidget::GreyButtonClicked()
{
	AdjustLocalUserColor(Colors[2], 2);
}

void ULobbyWidget::OrangeButtonClicked()
{
	AdjustLocalUserColor(Colors[3], 3);
}

void ULobbyWidget::BlueButtonClicked()
{
	AdjustLocalUserColor(Colors[4], 4);
}

void ULobbyWidget::GreenButtonClicked()
{
	AdjustLocalUserColor(Colors[5], 5);
}

void ULobbyWidget::YellowButtonClicked()
{
	AdjustLocalUserColor(Colors[6], 6);
}

void ULobbyWidget::WhiteCyanButtonClicked()
{
	AdjustLocalUserColor(Colors[7], 7);
}
