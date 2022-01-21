// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayGameInstance.h"

URelayGameInstance::URelayGameInstance()
{
	IsReliable = false;
	IsOrdered = false;
	IsLoading = false;
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
}

void URelayGameInstance::SaveGameUserSignInEntry(FText in_Username, FText in_Password)
{
}

bool URelayGameInstance::LoadGame()
{
	return false;
}

void URelayGameInstance::CreateLocalUser(FText in_LocalUsername, FLinearColor in_LocalColor)
{
	LocalUser = *new FRelayUserData();
	LocalUser.Username = in_LocalUsername;
	LocalUser.PlayerColor = in_LocalColor;
}

void URelayGameInstance::AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible)
{
	
}

/*FRelayUserData URelayGameInstance::CreateUserAndAddToList(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID)
{
	
}*/
