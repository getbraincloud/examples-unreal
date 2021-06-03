// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"
#include "RelayGameInstance.h"

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

	UFUNCTION(BlueprintCallable)
	void BraincloudInit();

	UFUNCTION(BlueprintCallable)
	void LoginUniversal(FString username,FString password);

	UFUNCTION(BlueprintCallable)
	void LookForLobby();

	//Braincloud interaction functions
	void OnLobbyEvent(const FString& jsonData);
	//Helpers
	FString FJsonValueToString(const FString &jsonData,FString valueToGet);
	uint8 FJsonValueToInt(const FString &jsonData,FString valueToGet);
	FLobby parseLobby(const FString& jsonData);

	URelayGameInstance* GetInstance();
	static ARelayNetworkInterface* GetInterface();
	void SubmitPlayerName();
	
private:

	//RTT callback interface
	//virtual void rttCallback(const FString &jsonData) override;
	
	/*Variables*/
	public:
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;

	/*
	//Watched bool for Loading Screen
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	bool IsLoading;
	//Watched bool for pop up error dialog
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	bool ErrorOccured;
	//Message to send to pop up error dialog
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ErrorMessage;
	*/

	
	//ServerBCCallback* serverCallback;
	
	//RTTCallback* bcRTTCallback;
	//RelayCallback relayCallback;
	
	private:
	UPROPERTY()
	UBrainCloudWrapper *_bcWrapper;
	UPROPERTY()
	FString _username;
};



