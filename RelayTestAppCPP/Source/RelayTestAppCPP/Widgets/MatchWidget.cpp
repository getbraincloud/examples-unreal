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
	EndMatchButton->OnClicked.AddDynamic(this, &UMatchWidget::EndMatchButtonClicked);
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
		GameInstance->Interface->LocalUserSendEvent(CalculateInputPosition(), MoveOperation);
	}
}

void UMatchWidget::GameButtonClicked()
{
	FVector2D position = CalculateInputPosition();
	SpawnMouseShockwave(position, GameInstance->SaveGameInstance->LocalUserColor, true);
	GameInstance->Interface->LocalUserSendEvent(position, ShockwaveOperation);
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
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(ReturnMenuLoadingMessage), false);
	GameInstance->Interface->DisconnectEverything();
}

void UMatchWidget::EndMatchButtonClicked()
{
	GameInstance->Interface->EndMatch();
}

void UMatchWidget::AdjustVisibilityForEndMatchButton(bool in_bIsUserHost)
{
	EndMatchButton->SetVisibility(in_bIsUserHost ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

FVector2D UMatchWidget::CalculateInputPosition()
{
	FVector2D resultPosition;
	RelayPlayerController->GetMousePosition(resultPosition.X, resultPosition.Y);

	float Scale = UWidgetLayoutLibrary::GetViewportScale(RelayPlayerController);
	resultPosition.X = resultPosition.X / Scale;
	resultPosition.Y = resultPosition.Y / Scale;
	
	//Coordinates of game area button top left corner
	resultPosition.X = resultPosition.X - 820;
	resultPosition.Y = resultPosition.Y - 200;
	return resultPosition;
}

void UMatchWidget::SpawnMouseShockwave(FVector2D in_position, FLinearColor in_color, bool isInputLocal)
{
	//Offsetting position
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
			break;
		}
	}
}

void UMatchWidget::RemoveUserFromList(FString in_profileId)
{
	UOtherMatchUserWidget* cursorToRemove = nullptr;
	for(UOtherMatchUserWidget* cursor : UserCursors)
	{
		if(cursor->UserData->ProfileID.Equals(in_profileId))
		{
			cursor->RemoveFromParent();
			cursorToRemove = cursor;
			break;
		}
	}
	if(cursorToRemove != nullptr)
	{
		UserCursors.Remove(cursorToRemove);	
	}
	
	Match_UserListView->ClearListItems();
	for(ARelayUserData* user : GameInstance->ListOfUserObjects)
	{
		Match_UserListView->AddItem(user);
	}
	Match_UserListView->RequestRefresh();
	GEngine->ForceGarbageCollection(true);
}
