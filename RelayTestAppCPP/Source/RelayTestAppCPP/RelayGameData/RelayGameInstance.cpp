// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayGameInstance.h"

#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"
#include "RelayTestAppCPP/Widgets/GameWidget.h"

URelayGameInstance::URelayGameInstance()
{
	bIsReliable = false;
	bIsOrdered = false;
	bIsLoading = false;
	SaveSlotName = "RelayTestAppSave";
	UserIndex = 0;
}

void URelayGameInstance::SetUpLoadingScreen(int in_widgetIndex, FText in_message, bool in_bCancelButtonEnabled)
{
	//Set the index for after loading screen is finished
	NextWidgetIndex = in_widgetIndex;
	AdjustCancelButtonVisibility(in_bCancelButtonEnabled);
	//Setting Message for loading screen
	GameWidget->LoadingScreenWidget->LoadingMessage->SetText(in_message);

	//Change widget view to loading screen
	GameWidget->WidgetSwitcher->SetActiveWidgetIndex(0);
	bIsLoading = true;
}

void URelayGameInstance::AdjustCancelButtonVisibility(bool in_bIsVisible)
{
	if(in_bIsVisible)
	{
		GameWidget->LoadingScreenWidget->Cancel_Button->SetVisibility(ESlateVisibility::Visible);	
	}
	else
	{
		GameWidget->LoadingScreenWidget->Cancel_Button->SetVisibility(ESlateVisibility::Hidden);
	}
}

void URelayGameInstance::FinishedLoading()
{
	GameWidget->WidgetSwitcher->SetActiveWidgetIndex(NextWidgetIndex);
	CurrentWidgetIndex = NextWidgetIndex;
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

	SetUpSignInScreen();
}

void URelayGameInstance::CreateLocalUser(FText in_LocalUsername, FText in_LocalPassword)
{
	//Create user for widgets to use
	LocalUser = NewObject<ARelayUserData>();
	LocalUser->Initialize(in_LocalUsername, SaveGameInstance->LocalUserColor, Interface->LocalProfileID);
	
	//Save info of local player
	SaveGameInstance->LocalUsername = in_LocalUsername;
	SaveGameInstance->LocalPassword = in_LocalPassword;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
}

void URelayGameInstance::AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible)
{
	for(ARelayUserData* user : ListOfUserObjects)
	{
		if(user->ProfileID.Equals(in_ProfileID))
		{
			user->bShowShockwave = in_IsVisible;
		}
	}	
}

void URelayGameInstance::RemoveUserFromList(FString in_profileId)
{
	ARelayUserData* userToRemove;
	for(ARelayUserData* user : ListOfUserObjects)
	{
		if(user->ProfileID.Equals(in_profileId))
		{
			userToRemove = user;
		}
	}
	ListOfUserObjects.Remove(userToRemove);
}

void URelayGameInstance::SetUpSignInScreen()
{
	GameWidget->SignInWidget->Username_EditableText->SetText(SaveGameInstance->LocalUsername);
	GameWidget->SignInWidget->Password_EditableText->SetText(SaveGameInstance->LocalPassword);
	GameWidget->WidgetSwitcher->SetActiveWidgetIndex(1);
}

ARelayUserData* URelayGameInstance::CreateUser(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID)
{
	ARelayUserData* newUser = NewObject<ARelayUserData>(this);
	newUser->Initialize(in_NewUsername, in_NewUserColor, in_NewProfileID);
	return newUser;
}
