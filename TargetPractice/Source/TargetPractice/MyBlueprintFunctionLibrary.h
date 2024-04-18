// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Launch/Resources/Version.h"
#include "HAL/PlatformApplicationMisc.h"

#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TARGETPRACTICE_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "System Information")
	static FString RunCppFunction();
	
};
