// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LoadingScreenWidget.h"
#include "LobbyWidget.h"
#include "MainMenuWidget.h"
#include "MatchWidget.h"
#include "SignInWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/WidgetSwitcher.h"
#include "GameWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API UGameWidget : public UUserWidget
{
	GENERATED_BODY()

	//UGameWidget(const FObjectInitializer& ObjectInitializer);
public:
//Functions

	virtual void NativeConstruct() override;
	
	UFUNCTION(BlueprintCallable)
	void SetUpPopUp(FText in_ErrorMessage);

	UFUNCTION()
	void ClosePopUp();
	
//Variables
	//Note: using meta=(BindWidget) should attach the variable to the Widget in Editor automatically as long as the variable name is the same.

	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UTextBlock* ErrorMessage_Text;

	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UCanvasPanel* PopUpWindow;

	UPROPERTY(meta=(BindWidget))
	UButton* ClosePopUp_Button;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetSwitcher* WidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ULoadingScreenWidget* LoadingScreenWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USignInWidget* SignInWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMainMenuWidget* MainMenuWidget;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ULobbyWidget* LobbyWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMatchWidget* MatchWidget;
};