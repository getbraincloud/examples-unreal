#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/ListView.h"
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
	
	UPROPERTY()
	TArray<UOtherMatchUserWidget*> UserCursors;
	
	UPROPERTY(meta=(BindVariable))
	FLinearColor color;
	
	UPROPERTY(meta=(BindWidget))
	UListView* Match_UserListView;

	UPROPERTY(meta=(BindWidget))
	UCanvasPanel* MouseCursorCanvasPanel;
};