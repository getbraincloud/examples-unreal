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

	virtual void NativeConstruct() override;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UOtherMatchUserWidget*> UserCursors;
	
	UPROPERTY(BlueprintReadWrite,meta=(BindVariable))
	FLinearColor color;
	
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UListView* Match_UserListView;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* MouseCursor_CanvasPanel;

	UPROPERTY(BlueprintReadWrite)
	URelayGameInstance* GameInstance;
};