// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCWrapperProxy.h"
#include "RelayNetworkInterface.generated.h"

UCLASS()
class RELAYTESTAPP_API ARelayNetworkInterface : public AActor
{
	GENERATED_BODY()

/*Functions*/
	
public:	
	// Sets default values for this actor's properties
	ARelayNetworkInterface();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


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



