// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Internationalization/Culture.h"
#include "BrainCloudWrapper.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE4TESTAPP_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "System Information")
    static FString RunCppFunction(UBrainCloudWrapper* wrapper);

    UFUNCTION(BlueprintCallable, Category = "System Information")
    static FString GetCountryOverride();

    UFUNCTION(BlueprintCallable, Category = "System Information")
    static void RunCppCountryOverride(UBrainCloudWrapper* wrapper);

};
