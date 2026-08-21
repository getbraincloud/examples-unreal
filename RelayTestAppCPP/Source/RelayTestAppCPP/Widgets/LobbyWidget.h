#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/ListView.h"
#include "Components/PanelWidget.h"

#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
#include "WidgetAddOns/ColourOptionWidget.h"
#include "LobbyWidget.generated.h"

/**
 *
 */
UCLASS()
class RELAYTESTAPPCPP_API ULobbyWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	void AdjustLocalUserColor(FLinearColor in_newColor, int in_arrowColorIndex);

	UFUNCTION()
	void StartButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	UFUNCTION()
	void LeaveButtonClicked();

	UFUNCTION()
	void OnColourOptionClicked(int32 in_colourIndex, FLinearColor in_colour);

public:

	void AdjustVisibilityForStartButton(bool bIsUserHost);

	void AdjustVisibilityForJoinButton(bool bPresentSinceStart);

	//Builds the selectable colour swatches from the colours read from the brainCloud "Colours" global property
	void PopulateColourOptions(const TArray<FLinearColor>& in_colours);

	UPROPERTY(meta=(BindWidget))
	UListView* Lobby_ListView;

	UPROPERTY(meta=(BindWidget))
	UButton* StartMatchButton;

	UPROPERTY(meta=(BindWidget))
	UButton* JoinMatchButton;

	UPROPERTY(meta=(BindWidget))
	UButton* LeaveLobbyButton;

	UPROPERTY(meta=(BindWidget))
	class UTextBlock* VersionText;

	//Panel that holds the dynamically-created colour swatches (one UColourOptionWidget per available colour)
	UPROPERTY(meta=(BindWidget))
	UPanelWidget* ColourOptions_Panel;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UColourOptionWidget> ColourOptionWidgetRef;

	//How many colour swatches to place per row when ColourOptions_Panel is a Uniform Grid Panel
	UPROPERTY(EditAnywhere)
	int32 ColourOptionsPerRow = 8;

	//Colours read from the brainCloud "Colours" global property, in the order a member's colorIndex refers to
	UPROPERTY(BlueprintReadOnly)
	TArray<FLinearColor> Colors;

private:
	UPROPERTY()
	URelayGameInstance* GameInstance;

	const FString JoinMatchLoadingMessage = TEXT("Joining a match... ");

	const FString ReturnMenuLoadingMessage = TEXT("Returning to Main Menu...");
};
