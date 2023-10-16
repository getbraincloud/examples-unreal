#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
#include "MainMenuWidget.generated.h"

class UTextBlock;
class UComboBoxString;
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
	void SetUpLoadingLobbyScreen();
	
public:
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UTextBlock* MainMenuUsername_Text_1;

	UPROPERTY(meta=(BindWidget))
	UButton* JoinLobbyButton;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* VersionText;

	UPROPERTY(BlueprintReadWrite)
	URelayGameInstance* RelayGameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	UComboBoxString* Protocol_Combobox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	UComboBoxString* LobbyType_Combobox;

	const FString LoadingMessage = TEXT("Joining a lobby...");
};