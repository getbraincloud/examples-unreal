#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
#include "LoadingScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API ULoadingScreenWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeOnInitialized() override;
	
	virtual void NativeConstruct() override;
	
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION()
	void OnCancelButtonClicked();
	
public:


	UPROPERTY(meta = (BindWidget))
	UTextBlock* LoadingMessage;

	UPROPERTY (meta = (BindWidget))
	class UButton* Cancel_Button;

private:
	const FString CancelLoadingMessage = TEXT("Cancelling lobby request....");

	UPROPERTY()
	URelayGameInstance* GameInstance;

	UPROPERTY()
	bool isWaiting;
};