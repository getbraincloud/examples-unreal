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
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this actor's properties
	ARelayNetworkInterface();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Used to remove app id from responding data with profile id
	UFUNCTION(BlueprintCallable,Category="Interface")
	FString GetProfileIdFromString(FString data);

	UFUNCTION(BlueprintCallable,Category="Interface")
	FString GetProfileIDFromNetID(int netId,UBrainCloudWrapper* wrapper);
	
/*Variables*/
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;

};



