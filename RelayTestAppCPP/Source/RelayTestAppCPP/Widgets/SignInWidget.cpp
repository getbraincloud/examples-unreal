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
	GameInstance->CreateLocalUser(Username_EditableText->GetText(), Password_EditableText->GetText());
	GameInstance->GameWidget->MainMenuWidget->MainMenuUsername_Text_1->SetText(Username_EditableText->GetText());
	GameInstance->Interface->LoginUniversalBC();
	
	FString loadingMessage = TEXT("Logging in....");
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(loadingMessage), false);
}
