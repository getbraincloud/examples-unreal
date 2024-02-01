// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrainCloudRelay.h"
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

//Logout user on shutdown
	virtual void Shutdown() override;
	
//Loading Screen functions
	
	void SetUpLoadingScreen(int in_widgetIndex, FText in_message, bool in_bCancelButtonEnabled);
	
	void AdjustCancelButtonVisibility(bool in_bIsVisible);
	
	void FinishedLoading();

//Save/Load File
	
	void SaveGameUserColor(FLinearColor in_Color,int in_ArrowColorIndex);
	
	void SaveGameUserSignInEntry(FText in_Username,FText in_Password);

	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void LoadGame();

	ARelayUserData* CreateUser(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID);
	
	void CreateLocalUser(FText in_LocalUsername);

	//Called from a blueprint toggle set up within Content->Widgets->ScreenAddonWidgets->WBP_Match_UserEntry.uasset 
	UFUNCTION(BlueprintCallable,Category="RelayGameInstance")
	void AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible);

	void RemoveUserFromList(FString in_profileId);

	void SetUpSignInScreen() const;

	bool IsUsernameNew() const
	{
		return SaveGameInstance->LocalUsername.ToString() == LocalUser->Username.ToString();
	}

	UFUNCTION(BlueprintCallable, Category="RelayGameInstance")
	void UpdateRelayProtocol(FString in_relaySelection);

	UPROPERTY(BlueprintReadWrite, Category="RelayGameInstance")
	FString LobbyType;	

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

	UPROPERTY(BlueprintReadOnly)
	BCRelayConnectionType RelayProtocol;
	UPROPERTY(BlueprintReadOnly)
	FString RelayProtocolString;
	
	
};
