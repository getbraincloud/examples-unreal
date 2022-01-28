#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ListView.h"
#include "MatchWidget.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API UMatchWidget : public UUserWidget
{
	GENERATED_BODY()

	//ToDo: Need to make OtherMatchUserWidget class for Array reference
	UPROPERTY(meta=(BindVariable))
	FLinearColor color;
	UPROPERTY(meta=(BindWidget))
	UListView* MatchUserListView;
};