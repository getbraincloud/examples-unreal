// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayGameInstance.h"

#include "Kismet/GameplayStatics.h"

URelayGameInstance::URelayGameInstance()
{
	IsReliable = false;
	IsOrdered = false;
	IsLoading = false;
	SaveSlotName = "RelayTestAppSave";
	UserIndex = 0;
}

void URelayGameInstance::SetUpLoadingScreen(int WidgetIndex, FText Message, bool bCancelButtonEnabled)
{
	
}

void URelayGameInstance::SetUpLoadingText(FText NewMessage)
{
}

void URelayGameInstance::AdjustCancelButtonVisibility(bool bIsVisible)
{
}

void URelayGameInstance::FinishedLoading(bool bIsNextStateCancelled)
{
}

void URelayGameInstance::SaveGameUserColor(FLinearColor in_Color, int in_ArrowColorIndex)
{
	SaveGameInstance->LocalUserColor = in_Color;
	SaveGameInstance->ArrowColorIndex = in_ArrowColorIndex;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
}

void URelayGameInstance::SaveGameUserSignInEntry(FText in_Username, FText in_Password)
{
	SaveGameInstance->LocalUsername = in_Username;
	SaveGameInstance->LocalPassword = in_Password;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
}

void URelayGameInstance::LoadGame()
{
	SaveGameInstance = Cast<URelaySaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName,UserIndex));
	if(SaveGameInstance == nullptr)
	{
		SaveGameInstance = Cast<URelaySaveGame>(UGameplayStatics::CreateSaveGameObject(URelaySaveGame::StaticClass()));
		UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);

		UE_LOG(LogTemp, Warning, TEXT("New Save Instance"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Save Data Loaded"));
	}
}

void URelayGameInstance::CreateLocalUser(FText in_LocalUsername, FText in_LocalPassword)
{
	//Create user for widgets to use
	LocalUser = *new FRelayUserData();
	LocalUser.Username = in_LocalUsername;
	LocalUser.PlayerColor = SaveGameInstance->LocalUserColor;

	//Save info of local player
	SaveGameInstance->LocalUsername = in_LocalUsername;
	SaveGameInstance->LocalPassword = in_LocalPassword;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
	UE_LOG(LogTemp, Warning, TEXT("Local User Created"));
}

void URelayGameInstance::AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible)
{
	
}

/*FRelayUserData URelayGameInstance::CreateUserAndAddToList(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID)
{
	
}*/
