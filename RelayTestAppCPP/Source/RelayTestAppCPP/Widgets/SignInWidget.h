#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
#include "SignInWidget.generated.h"

class UTextBlock;
class UEditableTextBox;
/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API USignInWidget : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;

	UFUNCTION()
	void LoginButtonClicked();
	
public:
	UPROPERTY(BlueprintReadWrite)
	URelayGameInstance* GameInstance;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* VersionText;

	UPROPERTY(meta=(BindWidget))
	UButton* LoginButton;

	UPROPERTY(meta=(BindWidget))
	UEditableTextBox* Username_EditableText;

	UPROPERTY(meta=(BindWidget))
	UEditableTextBox* Password_EditableText;

	const FString LoadingMessage = TEXT("Logging in....");
};