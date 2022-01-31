#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/ListView.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
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
	void LeaveButtonClicked();

	UFUNCTION()
	void BlackButtonClicked();

	UFUNCTION()
	void BlueButtonClicked();

	UFUNCTION()
	void GreenButtonClicked();

	UFUNCTION()
	void GreyButtonClicked();

	UFUNCTION()
	void OrangeButtonClicked();

	UFUNCTION()
	void PurpleButtonClicked();

	UFUNCTION()
	void WhiteCyanButtonClicked();

	UFUNCTION()
	void YellowButtonClicked();
	
public:

	void AdjustVisibilityForStartButton(bool bIsUserHost);

	UPROPERTY(meta=(BindWidget))
	UListView* Lobby_ListView;
	
	UPROPERTY(meta=(BindWidget))
	UButton* StartMatchButton;

	UPROPERTY(meta=(BindWidget))
	UButton* LeaveLobbyButton;

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

private:
	UPROPERTY()
	URelayGameInstance* GameInstance;


	//Color Buttons	
	UPROPERTY(meta=(BindWidget))
	UButton* Black_Button;
	
	UPROPERTY(meta=(BindWidget))
	UButton* Blue_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* Green_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* Grey_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* Orange_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* Purple_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* WhiteCyan_Button;

	UPROPERTY(meta=(BindWidget))
	UButton* Yellow_Button;
};
