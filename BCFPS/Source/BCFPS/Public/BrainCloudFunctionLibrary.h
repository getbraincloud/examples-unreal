// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <BrainCloudAppDataStruct.h>
#include "BrainCloudFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class BCFPS_API UBrainCloudFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BrainCloud Utility")
	static FBrainCloudAppDataStruct GetBCAppData();

	UFUNCTION(BlueprintCallable, Category = "BrainCloud Utility")
	static void SetBCAppData(FBrainCloudAppDataStruct appData);
};
