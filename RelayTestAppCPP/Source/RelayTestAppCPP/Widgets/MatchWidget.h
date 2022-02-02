#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Styling/SlateBrush.h"
#include "Components/CanvasPanel.h"
#include "Components/ListView.h"
#include "RelayTestAppCPP/RelayPlayerController.h"
#include "WidgetAddOns/OtherMatchUserWidget.h"
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
	
	void SpawnMouseShockwave();
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UOtherMatchUserWidget*> UserCursors;
	
	UPROPERTY(BlueprintReadWrite,meta=(BindVariable))
	FLinearColor color;
	
	UPROPERTY(meta=(BindWidget))
	UListView* Match_UserListView;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* MouseCursor_CanvasPanel;

	UPROPERTY(BlueprintReadWrite)
	URelayGameInstance* GameInstance;

	UPROPERTY(meta=(BindWidget))
	UButton* LeaveButton;

	UPROPERTY(meta=(BindWidget))
	UButton* GameAreaButton;

	UPROPERTY()
	bool bIsMouseInGameButton;

	UPROPERTY()
	ARelayPlayerController* RelayPlayerController;

	float LocationX;
	float LocationY;
	float Scale;
};