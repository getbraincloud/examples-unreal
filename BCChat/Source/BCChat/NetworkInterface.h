// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <ConvertUtilities.h>
#include "BrainCloudWrapper.h"
#include "NetworkInterface.generated.h"

UCLASS()
class BCCHAT_API ANetworkInterface : public AActor
{
	GENERATED_BODY()

/*Functions*/

public:
	//Used to remove app id from responding data
	UFUNCTION(BlueprintCallable,Category="Interface")
	FString GetProfileIdFromString(FString data);

	UFUNCTION(BlueprintCallable,Category="Interface")
	FString GetProfileIDFromNetID(int netId,UBrainCloudWrapper* wrapper);

	UFUNCTION(BlueprintCallable,Category="Interface")
	FString GetBrainCloudVersion(UBrainCloudWrapper* wrapper);

	UFUNCTION(BlueprintCallable,Category="Interface")
	FString BCBytesToString(TArray<uint8> in_data);
	
	UFUNCTION(BlueprintCallable,Category="Interface")
	TArray<uint8> BCStringToBytes(const FString &in_string);
	
/*Variables*/
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;

};