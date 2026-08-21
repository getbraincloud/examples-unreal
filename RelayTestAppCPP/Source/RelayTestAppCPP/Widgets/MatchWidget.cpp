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

	if(LocalCursorWidgetRef == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("UMatchWidget::NativeConstruct - LocalCursorWidgetRef is not set. Assign the same cursor widget used for other players to it in WBP_Match's Class Defaults."));
	}
	else
	{
		LocalCursorWidget = CreateWidget<UOtherMatchUserWidget>(this, LocalCursorWidgetRef);
		LocalCursorWidget->Arrow_Image->SetVisibility(ESlateVisibility::Hidden);
		MouseCursor_CanvasPanel->AddChildToCanvas(LocalCursorWidget);
	}
}

void UMatchWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(bIsMouseInGameButton)
	{
		FVector2D position = CalculateInputPosition();
		GameInstance->Interface->LocalUserSendEvent(position, MoveOperation);

		if(LocalCursorWidget != nullptr)
		{
			if(UCanvasPanelSlot* cursorSlot = Cast<UCanvasPanelSlot>(LocalCursorWidget->Slot))
			{
				cursorSlot->SetPosition(position);
			}
		}
	}
}

void UMatchWidget::GameButtonClicked()
{
	FVector2D position = CalculateInputPosition();
	SpawnPaintSplatter(position, GameInstance->SaveGameInstance->LocalUserColor);
	GameInstance->Interface->LocalUserSendEvent(position, ShockwaveOperation);
}

void UMatchWidget::GameButtonHovered()
{
	bIsMouseInGameButton = true;
	RelayPlayerController->SetNativeCursorHidden(true);
	if(LocalCursorWidget != nullptr)
	{
		LocalCursorWidget->Arrow_Image->SetColorAndOpacity(GameInstance->SaveGameInstance->LocalUserColor);
		LocalCursorWidget->Arrow_Image->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
}

void UMatchWidget::GameButtonUnhovered()
{
	bIsMouseInGameButton = false;
	RelayPlayerController->SetNativeCursorHidden(false);
	if(LocalCursorWidget != nullptr)
	{
		LocalCursorWidget->Arrow_Image->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UMatchWidget::LeaveButtonClicked()
{
	GameInstance->Interface->LeaveLobby();
	GameInstance->SetUpLoadingScreen(2, FText::AsCultureInvariant(ReturnMenuLoadingMessage), false);
	GameInstance->Interface->StartLoadingTimer();
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

void UMatchWidget::SpawnPaintSplatter(FVector2D in_position, FLinearColor in_color)
{
	if(PaintSplatterWidgetRef == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("UMatchWidget::SpawnPaintSplatter - PaintSplatterWidgetRef is not set. Assign WBP_PaintSplatter to it in WBP_Match's Class Defaults."));
		return;
	}

	//Setting Up widget and add to viewport
	UPaintSplatterWidget* splatter = Cast<UPaintSplatterWidget>(CreateWidget(this, PaintSplatterWidgetRef));
	splatter->AddToViewport(1);
	splatter->Splatter_Image->SetColorAndOpacity(in_color);

	//Adding to Splatter Canvas then centering the splatter's pivot on the click position,
	//so it lands under the cursor regardless of the sprite's size. Forcing an equal width/height
	//prevents the sprite from being stretched into a non-uniform shape.
	UCanvasPanelSlot* widgetSlot = Shockwave_CanvasPanel->AddChildToCanvas(splatter);
	widgetSlot->SetAutoSize(false);
	widgetSlot->SetSize(PaintSplatterSize);
	widgetSlot->SetAlignment(FVector2D(0.5f, 0.5f));
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
