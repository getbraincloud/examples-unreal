// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SplatterAnimationLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPP_API USplatterAnimationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Splatter")
	static float SplatSizeOverTime(float t, float a, float b);

	UFUNCTION(BlueprintCallable, Category = "Splatter")
	static float SplatOpacityOverTime(float t, float a);

	UFUNCTION(BlueprintCallable, Category = "Splatter")
	static float FadeOpacityOverTime(float t, float a);

	UFUNCTION(BlueprintCallable, Category = "Splatter")
	static FColor HexToColor(FString HexString);
};
