#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "MainMenuWidget.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	UFUNCTION()
	void GoToLoadingScreen();
	
public:
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UTextBlock* MainMenuUsername_Text_1;

	UPROPERTY(meta=(BindWidget))
	UButton* JoinLobbyButton;
};