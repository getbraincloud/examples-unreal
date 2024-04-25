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

	UFUNCTION(BlueprintCallable)
	void OpenLogoutConfirmWindow();

	UFUNCTION()
	void LogoutConfirm();
	
//Variables
	//Note: using meta=(BindWidget) attach the variable to the Widget in Editor automatically as long as the variable name is the same.

	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UTextBlock* ErrorMessage_Text;

	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UCanvasPanel* PopUpWindow;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ConfirmLogoutWindow;	

	UPROPERTY(meta=(BindWidget))
	UButton* ClosePopUp_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* AcceptLogoutPopUp_Button;
	
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

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* AppID_Text;
	
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* LobbyID_Text;

	UPROPERTY()
	URelayGameInstance* RelayGameInstance;
};
