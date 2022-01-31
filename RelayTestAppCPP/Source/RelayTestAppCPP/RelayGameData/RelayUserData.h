// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RelayUserData.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API ARelayUserData : public AActor
{
	GENERATED_BODY()
public:

	ARelayUserData() {}
	
	//Review Note: Couldn't use a normal constructor to initialize these values because this is a UObject.
	//Also couldn't make this a struct because I couldn't add it to a TArray thats on GameInstance.  
	void Initialize(FText in_userName, FLinearColor in_playerColor, FString in_profileId)
	{
		Username = in_userName;
		PlayerColor = in_playerColor;
		ProfileID = in_profileId;
		bShowShockwave = true;
	}

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FText Username;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor PlayerColor;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString ProfileID;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bShowShockwave;
};
