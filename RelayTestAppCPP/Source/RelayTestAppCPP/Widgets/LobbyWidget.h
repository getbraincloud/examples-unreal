#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/ListView.h"
#include "LobbyWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API ULobbyWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void AdjustVisibilityForStartButton(bool bIsUserHost);

	UPROPERTY(meta=(BindWidget))
	UListView* LobbyListView;
	
	UPROPERTY(meta=(BindWidget))
	UButton* StartMatchButton;

	//Colors
	/*
	 * black = 0
	 * purple = 1
	 * grey = 2
	 * orange = 3
	 * blue = 4
	 * green = 5
	 * yellow = 6
	 * white cyan = 7
	 */
	UPROPERTY(EditAnywhere)
	TArray<FLinearColor> Colors;
};
