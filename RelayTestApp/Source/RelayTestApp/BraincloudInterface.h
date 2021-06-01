// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "IRTTCallback.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"
#include "IServerCallback.h"

#include "BraincloudInterface.generated.h"

UCLASS()
class RELAYTESTAPP_API ABraincloudInterface : public AActor, public IServerCallback, public IRTTCallback
{
	GENERATED_BODY()

/*Functions*/
	
public:	
	// Sets default values for this actor's properties
	ABraincloudInterface();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void BraincloudInit();

	UFUNCTION(BlueprintCallable)
	void LoginUniversal(FString username,FString password);

	UFUNCTION(BlueprintCallable)
	void FindLobby();
private:

	
	// IServerCallback interface
	virtual void serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString& jsonData) override;
	virtual void serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode, const FString& jsonError) override;
	// End of IServerCallback interface

	virtual void rttCallback(const FString &jsonData) override;

	/*Variables*/
	public:
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;

	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	bool IsLoading;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	bool ErrorOccured;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ErrorMessage;
	
	private:
	UBrainCloudWrapper *_bcWrapper;

	
};
