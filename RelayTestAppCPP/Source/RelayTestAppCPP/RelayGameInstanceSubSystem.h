// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RelayNetworkInterface.h"
#include "RelaySaveGame.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RelayGameInstanceSubSystem.generated.h"

USTRUCT()
struct FRelayUserData
{
	GENERATED_BODY()

	FText Username;
	FLinearColor PlayerColor;
	FString ProfileID;
	bool ShowShockwave;
};

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API URelayGameInstanceSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

/*********** Functions **************/
	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SetUpLoadingScreen(int WidgetIndex, FText Message, bool bCancelButtonEnabled);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SetUpLoadingText(FText NewMessage);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void AdjustCancelButtonVisibility(bool bIsVisible);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void FinishedLoading(bool bIsNextStateCancelled);
	
/*********** Variables **************/
	
	UPROPERTY()
	TArray<FRelayUserData> ListOfUserObjects;
	UPROPERTY()
	FRelayUserData LocalUser;
	UPROPERTY()
	FString ErrorMessage;
	
	UPROPERTY()
	bool ErrorOccurred;
	UPROPERTY()
	bool IsLoading;
	UPROPERTY()
	bool IsOrdered;
	UPROPERTY()
	bool IsReliable;

	//ToDo: GameWidget reference variable
	
	UPROPERTY()
	int CurrentWidgetIndex;
	UPROPERTY()
	int NextWidgetIndex;

	UPROPERTY()
	ARelayNetworkInterface* RelayNetworkInterface;

	UPROPERTY()
	URelaySaveGame* SaveGameInstance;
	UPROPERTY()
	FString SaveSlotName;
	//Used for Save Game to Slot Function for SaveGameInstance
	UPROPERTY()
	int UserIndex;
	
	
};
