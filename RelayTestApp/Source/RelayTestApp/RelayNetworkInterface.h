// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"
#include "RelayNetworkInterface.generated.h"

UCLASS()
class RELAYTESTAPP_API ARelayNetworkInterface : public AActor
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
	
/*Variables*/
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;

};