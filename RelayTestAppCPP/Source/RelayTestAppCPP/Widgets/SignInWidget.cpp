#include "SignInWidget.h"

#include "GameWidget.h"
#include "Components/EditableTextBox.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"


void USignInWidget::NativeConstruct()
{
	Super::NativeConstruct();
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
	LoginButton->OnClicked.AddDynamic(this, &USignInWidget::LoginButtonClicked);
}

void USignInWidget::LoginButtonClicked()
{
	//Making sure fields are filled
	if(Username_EditableText->GetText().IsEmpty())
	{
		FString popUpMessage = TEXT("Please enter username");
		GameInstance->GameWidget->SetUpPopUp(FText::AsCultureInvariant(popUpMessage));
	}
	else if(Password_EditableText->GetText().IsEmpty())
	{
		FString popUpMessage = TEXT("Please enter a password");
		GameInstance->GameWidget->SetUpPopUp(FText::AsCultureInvariant(popUpMessage));
	}
	
	//Creating user data object and saving the entry
	GameInstance->CreateLocalUser(Username_EditableText->GetText());
	GameInstance->SaveGameUserSignInEntry(Username_EditableText->GetText(), Password_EditableText->GetText());
	//Setting username text to show in Main Menu
	GameInstance->GameWidget->MainMenuWidget->MainMenuUsername_Text_1->SetText(Username_EditableText->GetText());
	//brainCloud call to authenticate
	GameInstance->Interface->LoginUniversalBC();
	
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(LoadingMessage), false);
}
