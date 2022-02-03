#include "MatchWidget.h"

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"

void UMatchWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	LeaveButton->OnClicked.AddDynamic(this, &UMatchWidget::LeaveButtonClicked);
	GameAreaButton->OnHovered.AddDynamic(this, &UMatchWidget::GameButtonHovered);
	GameAreaButton->OnUnhovered.AddDynamic(this, &UMatchWidget::GameButtonUnhovered);
	GameAreaButton->OnClicked.AddDynamic(this, &UMatchWidget::GameButtonClicked);
	bIsMouseInGameButton = false;
	RelayPlayerController = Cast<ARelayPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
	VersionText->SetText(FText::AsCultureInvariant(GameInstance->Interface->GetBrainCloudVersion()));
}

void UMatchWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(bIsMouseInGameButton)
	{
		//Input position is set to InputLocation
		CalculateInputPosition();
		GameInstance->Interface->LocalUserSendEvent(InputLocation, MoveOperation);
	}
}

void UMatchWidget::GameButtonClicked()
{
	//Get Mouse Position, input position is set to InputLocation
	CalculateInputPosition();
	SpawnMouseShockwave(InputLocation, GameInstance->SaveGameInstance->LocalUserColor, true);
	GameInstance->Interface->LocalUserSendEvent(InputLocation, ShockwaveOperation);
}

void UMatchWidget::GameButtonHovered()
{
	bIsMouseInGameButton = true;
	RelayPlayerController->ChangeCursorTexture(false);
}

void UMatchWidget::GameButtonUnhovered()
{
	bIsMouseInGameButton = false;
	RelayPlayerController->ChangeCursorTexture(true);
}

void UMatchWidget::LeaveButtonClicked()
{
	FString loadingMessage = TEXT("Returning to Main Menu");
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(loadingMessage), false);

	GameInstance->Interface->DisconnectEverything();
}

void UMatchWidget::CalculateInputPosition()
{
	RelayPlayerController->GetMousePosition(InputLocation.X, InputLocation.Y);
	Scale = UWidgetLayoutLibrary::GetViewportScale(RelayPlayerController);
	InputLocation.X = InputLocation.X / Scale;
	InputLocation.Y = InputLocation.Y / Scale;
	InputLocation.X = InputLocation.X - 820;
	InputLocation.Y = InputLocation.Y - 200;
}

void UMatchWidget::SpawnMouseShockwave(FVector2D in_position, FLinearColor in_color, bool isInputLocal)
{
	//Offsetting position //-55
	in_position.X = isInputLocal ? in_position.X + -90 : in_position.X + -70;
	in_position.Y = in_position.Y + -25;
	
	//Setting Up widget and add to viewport
	UShockwaveWidget* shockwave = Cast<UShockwaveWidget>(CreateWidget(this, ShockwaveWidgetRef));
	shockwave->AddToViewport(1);
	shockwave->Shockwave_Image->SetColorAndOpacity(in_color);

	//Adding to Shockwave Canvas to then set position
	UCanvasPanelSlot* widgetSlot = Shockwave_CanvasPanel->AddChildToCanvas(shockwave);
	widgetSlot->SetPosition(in_position);
}

void UMatchWidget::MoveOtherUserCursor(FVector2D in_inputPosition, FString in_profileId)
{
	for(UOtherMatchUserWidget* user : UserCursors)
	{
		if(user->UserData->ProfileID.Equals(in_profileId) && IsValid(user))
		{
			user->Arrow_Image->SetVisibility(ESlateVisibility::HitTestInvisible);
			UCanvasPanelSlot* widgetSlot = Cast<UCanvasPanelSlot>(user->Slot);
			widgetSlot->SetPosition(in_inputPosition);
		}
	}
}

void UMatchWidget::RemoveUserFromList(FString in_profileId)
{
	UOtherMatchUserWidget* cursorToRemove;
	for(UOtherMatchUserWidget* cursor : UserCursors)
	{
		if(cursor->UserData->ProfileID.Equals(in_profileId))
		{
			cursor->RemoveFromParent();
			cursorToRemove = cursor;
		}
	}
	UserCursors.Remove(cursorToRemove);
	
	Match_UserListView->ClearListItems();
	for(ARelayUserData* user : GameInstance->ListOfUserObjects)
	{
		Match_UserListView->AddItem(user);
	}
	Match_UserListView->RequestRefresh();
	GEngine->ForceGarbageCollection(true);
}
