// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameRelayCallback.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"
#include "IRTTCallback.h"
#include "RelayGameData/RelayGameInstance.h"
#include "IRelayCallback.h"
#include "IRelayConnectCallback.h"
#include "IRelaySystemCallback.h"
#include "Widgets/WidgetAddOns/OtherMatchUserWidget.h"
#include "RelayNetworkInterface.generated.h"

class URelayGameInstance;

UCLASS()
class RELAYTESTAPPCPP_API ARelayNetworkInterface : public AActor, public IRTTCallback, public IRelayCallback, public IRelaySystemCallback, public IRelayConnectCallback
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

	//Specific Format needed for operation; for example = "\"move\","
	void LocalUserSendEvent(FVector2D in_inputPosition, FString in_operation);

	//Called from Cancel button from loading screen
	void JoinLobbyCancelled();

	void SendUpdateReady();
	
//Callbacks
	void AuthenticateCallback();
	
	void FindLobby();

	virtual void rttCallback(const FString &jsonData) override;

	virtual void relayCallback(int netId, const TArray<uint8>& bytes) override;

	virtual void relaySystemCallback(const FString& jsonResponse) override;

	virtual void relayConnectSuccess(const FString& jsonResponse) override;

	virtual void relayConnectFailure(const FString& errorMessage) override;

//BrainCloud responses/calls
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void InitBrainCloud();
	
	void IsLocalUserHost(const TSharedPtr<FJsonObject>& DataJsonObject);

	void CheckMembers(const TSharedPtr<FJsonObject>& DataJsonObject);

	void UpdateIDs(const TSharedPtr<FJsonObject>& DataJsonObject);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void RemovingLeavingUser(FString in_memberID);

	void DisconnectEverything();

	void ConnectToRelay(const TSharedPtr<FJsonObject>& DataJsonObject);
	
//Helper Functions
	
	//Used to remove app id from responding data
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetProfileIdFromString(FString in_data);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetProfileIDFromNetID(int in_netId,UBrainCloudWrapper* in_wrapper);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetBrainCloudVersion();

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FLinearColor DetermineColorIndex(int in_ColorIndex);
	
private:
	static FString AppendColorIndex(int colorIndex);

	//ToDo: Figure out how to delete these functions to utilize ConvertUtilities class. Got a Lnk2001 error previously.
	static FString BytesToString(const uint8* in, int32 count);
	
	static int32 StringToBytes(const FString &in_string, uint8 *out_bytes, int32 in_maxBufferSize);
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
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	BCRelayConnectionType ConnectionType;
	UPROPERTY(Category="Braincloud",BlueprintReadWrite,EditAnywhere)
	FString AlgoJson;
	UPROPERTY(Category="Braincloud", EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UOtherMatchUserWidget> OtherCursorWidgetReference;
	
	UPROPERTY()
	URelayGameInstance* GameInstance;
	UPROPERTY()
	UBrainCloudWrapper* BrainCloudWrapper;

	class GameRelayCallback* Callback;
	
		/********** ID's **********/
	UPROPERTY()
	FString LobbyID;
	
	UPROPERTY()
	FString OwnerID;
	
	UPROPERTY()
	int CallbackNetID;

	UPROPERTY()
	FString LocalProfileID;

	//Json references
	//TSharedPtr<FJsonObject>* lobbyJson;
};
