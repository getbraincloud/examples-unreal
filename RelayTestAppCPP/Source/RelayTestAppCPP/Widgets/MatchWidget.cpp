#include "MatchWidget.h"

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"

void UMatchWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	LeaveButton->OnClicked.AddDynamic(this, &UMatchWidget::LeaveButtonClicked);
	GameAreaButton->OnHovered.AddDynamic(this, &UMatchWidget::GameButtonHovered);
	GameAreaButton->OnUnhovered.AddDynamic(this, &UMatchWidget::GameButtonUnhovered);
	bIsMouseInGameButton = false;
	RelayPlayerController = Cast<ARelayPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	
}

void UMatchWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(bIsMouseInGameButton)
	{
		RelayPlayerController->GetMousePosition(LocationX,LocationY);
		Scale = UWidgetLayoutLibrary::GetViewportScale(RelayPlayerController);
		LocationX = LocationX / Scale;
		LocationY = LocationY / Scale;
		LocationX = LocationX - 820;
		LocationY = LocationY - 200;
		GameInstance->Interface->LocalUserMouseMoved(LocationX, LocationY);
	}
}

void UMatchWidget::GameButtonClicked()
{
	SpawnMouseShockwave();
	//GameInstance->Interface->LocalShockwaveSpawn()
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

void UMatchWidget::SpawnMouseShockwave()
{
	/*
	 * Get Player color
	 * Get mouse position
	 * 
	 */
}
