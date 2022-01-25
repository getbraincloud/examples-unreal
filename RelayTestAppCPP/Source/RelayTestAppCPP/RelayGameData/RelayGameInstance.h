// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RelaySaveGame.h"
#include "Engine/GameInstance.h"
#include "RelayGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FRelayUserData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FText Username;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor PlayerColor;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString ProfileID;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool ShowShockwave;
};


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
	void SetUpLoadingScreen(int WidgetIndex, FText Message, bool bCancelButtonEnabled);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SetUpLoadingText(FText NewMessage);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void AdjustCancelButtonVisibility(bool bIsVisible);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void FinishedLoading(bool bIsNextStateCancelled);

//Save/Load File
	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SaveGameUserColor(FLinearColor in_Color,int in_ArrowColorIndex);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void SaveGameUserSignInEntry(FText in_Username,FText in_Password);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void LoadGame();

//User Specific
	//UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	//FRelayUserData CreateUserAndAddToList(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void CreateLocalUser(FText in_LocalUsername, FText in_LocalPassword);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible);

	bool IsUsernameNew() const
	{
		return SaveGameInstance->LocalUsername.ToString() == LocalUser.Username.ToString();
	}
	
	/*********** Variables **************/
	
	UPROPERTY(BlueprintReadWrite)
	TArray<FRelayUserData> ListOfUserObjects;
	UPROPERTY(BlueprintReadWrite)
	FRelayUserData LocalUser;
	UPROPERTY(BlueprintReadWrite)
	FString ErrorMessage;
	
	UPROPERTY(BlueprintReadWrite)
	bool ErrorOccurred;
	UPROPERTY(BlueprintReadWrite)
	bool IsLoading;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsOrdered;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsReliable;

	//ToDo: GameWidget reference variable
	
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
