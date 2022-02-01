// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RelaySaveGame.h"
#include "RelayUserData.h"
#include "Engine/GameInstance.h"
#include "RelayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPPCPP_API URelayGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	/*********** Functions **************/

	URelayGameInstance();
	
//Loading Screen functions
	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SetUpLoadingScreen(int in_widgetIndex, FText in_message, bool in_bCancelButtonEnabled);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void AdjustCancelButtonVisibility(bool in_bIsVisible);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void FinishedLoading(bool in_bIsNextStateCancelled);

//Save/Load File
	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SaveGameUserColor(FLinearColor in_Color,int in_ArrowColorIndex);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SaveGameUserSignInEntry(FText in_Username,FText in_Password);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void LoadGame();

	ARelayUserData* CreateUserAndAddToList(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void CreateLocalUser(FText in_LocalUsername, FText in_LocalPassword);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible);

	bool IsUsernameNew() const
	{
		return SaveGameInstance->LocalUsername.ToString() == LocalUser->Username.ToString();
	}
	
	/*********** Variables **************/

	UPROPERTY()
	TArray<ARelayUserData*> ListOfUserObjects;
	UPROPERTY(BlueprintReadWrite)
	ARelayUserData* LocalUser;
	UPROPERTY(BlueprintReadWrite)
	FString ErrorMessage;
	
	UPROPERTY(BlueprintReadWrite)
	bool bErrorOccurred;
	UPROPERTY(BlueprintReadWrite)
	bool bIsLoading;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bIsOrdered;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bIsReliable;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UGameWidget* GameWidget;
	
	UPROPERTY(BlueprintReadWrite)
	int CurrentWidgetIndex;
	UPROPERTY(BlueprintReadWrite)
	int NextWidgetIndex;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class ARelayNetworkInterface* Interface;
	//UPROPERTY(BlueprintReadWrite)
	//UBrainCloudWrapper* BrainCloudWrapper;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	URelaySaveGame* SaveGameInstance;
	
	UPROPERTY(BlueprintReadWrite)
	FString SaveSlotName;
	//Used for Save Game to Slot Function for SaveGameInstance
	UPROPERTY(BlueprintReadWrite)
	int UserIndex;
	
	
};
