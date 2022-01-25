#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RelayTestAppCPP/RelayGameData/RelayGameInstance.h"
#include "SignInWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API USignInWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite)
	URelayGameInstance* GameInstance;
};