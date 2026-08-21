#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/ListView.h"
#include "RelayTestAppCPP/RelayPlayerController.h"
#include "WidgetAddOns/OtherMatchUserWidget.h"
#include "WidgetAddOns/PaintSplatterWidget.h"
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

	void SpawnPaintSplatter(FVector2D in_position, FLinearColor in_color);

	void MoveOtherUserCursor(FVector2D in_inputPosition, FString in_profileId);

	void RemoveUserFromList(FString in_profileId);
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UOtherMatchUserWidget*> UserCursors;

	//The local player's own on-screen cursor, tinted with their chosen colour; reuses the same
	//widget class used for other players' cursors instead of an OS hardware cursor (which can't be tinted at runtime)
	UPROPERTY()
	UOtherMatchUserWidget* LocalCursorWidget;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UOtherMatchUserWidget> LocalCursorWidgetRef;
	
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
	TSubclassOf<UPaintSplatterWidget> PaintSplatterWidgetRef;

	//Forced width/height for spawned paint splatters, so the sprite always renders uniformly regardless of its source aspect ratio
	UPROPERTY(EditAnywhere)
	FVector2D PaintSplatterSize = FVector2D(64.f, 64.f);

	UPROPERTY()
	bool bIsMouseInGameButton;

	UPROPERTY()
	ARelayPlayerController* RelayPlayerController;

	const FString ReturnMenuLoadingMessage = TEXT("Returning to Main Menu...");
	const FString MoveOperation = TEXT("\"move\",");
	const FString ShockwaveOperation = TEXT("\"shockwave\",");
};