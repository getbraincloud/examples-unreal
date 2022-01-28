// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameRelayCallback.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"
#include "IRTTCallback.h"
#include "RelayGameData/RelayGameInstance.h"

#include "RelayNetworkInterface.generated.h"

class URelayGameInstance;

UCLASS()
class RELAYTESTAPPCPP_API ARelayNetworkInterface : public AActor, public IRTTCallback
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARelayNetworkInterface();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Note this shows up when hovering over a BP node.... ?
	/*************Functions************/
	
//Event Braincloud functions
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="RelayInterface")
	void LoginUniversalBC();

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="RelayInterface")
	void FindOrCreateLobby();

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="RelayInterface")
	void UpdateLocalColor(int in_colorIndex);

//Callbacks
	void AuthenticateCallback();
	
	void EnableRTTCallback();

	virtual void rttCallback(const FString &jsonData) override;

//BrainCloud responses/calls
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void InitBrainCloud();
	
	void IsLocalUserHost(const TSharedPtr<FJsonObject>& DataJsonObject);

	void CheckMembers(const TSharedPtr<FJsonObject>& DataJsonObject);

	void UpdateIDs(const TSharedPtr<FJsonObject>& DataJsonObject);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void RemovingLeavingUser(FString in_memberID);
	
//Helper Functions
	
	//Used to remove app id from responding data
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetProfileIdFromString(FString in_data);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetProfileIDFromNetID(int in_netId,UBrainCloudWrapper* in_wrapper);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetBrainCloudVersion(UBrainCloudWrapper* in_wrapper);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FLinearColor DetermineColorIndex(int in_ColorIndex);
	
private:
	static FString AppendColorIndex(int colorIndex);
	
	/*************Variables************/
public:

	bool bIsHost;
	bool bIsReady;
	bool bRTTConnectionIsLive;
	bool bCancelRequested;
	int64 ToAllPlayersNetID = 1099511627775;

//Exposed Properties to set in Editor
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;
	UPROPERTY(Category="BrainCloud",EditAnywhere,BlueprintReadWrite)
	BCRTTConnectionType ConnectionType;
	UPROPERTY(Category="Braincloud",BlueprintReadWrite,EditAnywhere)
	FString AlgoJson;

	
	UPROPERTY()
	URelayGameInstance* GameInstance;
	UPROPERTY()
	UBrainCloudWrapper* BrainCloudWrapper;

	
	class GameRelayCallback* Callback;
	
		/********** ID's **********/
	FString ColorIndex;
	FString LobbyID;
	TArray<FString> UserCXIDs;
	FString OwnerID;
	TMap<int,FString> ProfileIDToNetID;
	int CallbackNetID;
	FString LocalProfileID;

	//Json references
	
	TSharedPtr<FJsonObject>* lobbyJson;
	
	
};
