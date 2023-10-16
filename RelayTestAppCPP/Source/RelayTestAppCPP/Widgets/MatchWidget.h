#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/ListView.h"
#include "RelayTestAppCPP/RelayPlayerController.h"
#include "WidgetAddOns/OtherMatchUserWidget.h"
#include "WidgetAddOns/ShockwaveWidget.h"
#include "MatchWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API UMatchWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
	UFUNCTION()
	void GameButtonClicked();

	UFUNCTION()
	void GameButtonHovered();

	UFUNCTION()
	void GameButtonUnhovered();
	
	UFUNCTION()
	void LeaveButtonClicked();

	UFUNCTION()
	void EndMatchButtonClicked();

	void AdjustVisibilityForEndMatchButton(bool in_bIsUserHost);

	FVector2D CalculateInputPosition();
	
	void SpawnMouseShockwave(FVector2D in_position, FLinearColor in_color, bool isInputLocal);

	void MoveOtherUserCursor(FVector2D in_inputPosition, FString in_profileId);

	void RemoveUserFromList(FString in_profileId);
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UOtherMatchUserWidget*> UserCursors;
	
	UPROPERTY(BlueprintReadWrite,meta=(BindVariable))
	FLinearColor Color;
	
	UPROPERTY(meta=(BindWidget))
	UListView* Match_UserListView;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* MouseCursor_CanvasPanel;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* Shockwave_CanvasPanel;

	UPROPERTY(BlueprintReadWrite)
	URelayGameInstance* GameInstance;

	UPROPERTY(meta=(BindWidget))
	UButton* LeaveButton;
	
	UPROPERTY(meta=(BindWidget))
	UButton* EndMatchButton;

	UPROPERTY(meta=(BindWidget))
	UButton* GameAreaButton;

	UPROPERTY(meta=(BindWidget))
	class UTextBlock* VersionText;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UShockwaveWidget> ShockwaveWidgetRef;

	UPROPERTY()
	bool bIsMouseInGameButton;

	UPROPERTY()
	ARelayPlayerController* RelayPlayerController;

	const FString ReturnMenuLoadingMessage = TEXT("Returning to Main Menu...");
	const FString MoveOperation = TEXT("\"move\",");
	const FString ShockwaveOperation = TEXT("\"shockwave\",");
};