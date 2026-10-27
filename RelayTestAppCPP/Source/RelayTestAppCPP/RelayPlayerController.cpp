// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayPlayerController.h"

void ARelayPlayerController::SetNativeCursorHidden(bool in_bHidden)
{
	CurrentMouseCursor = in_bHidden ? EMouseCursor::None : EMouseCursor::Default;
}
