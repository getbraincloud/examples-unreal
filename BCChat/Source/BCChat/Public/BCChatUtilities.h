// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BCChatUtilities.generated.h"

/**
 * 
 */
UCLASS()
class BCCHAT_API UBCChatUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BCChat Utility")
	static FDateTime UTCToDateTime(int64 utcMSeconds);

	UFUNCTION(BlueprintCallable, Category = "BCChat Utility")
	static void SelectFile(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);
};
