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

protected:
	// Sets default values for this actor's properties
	ARelayNetworkInterface();
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
//Button related Event brainCloud functions
	void LoginUniversalBC();
	
	void FindOrCreateLobby();

	//Color buttons main function to swap colors from LobbyWidget
	void UpdateLocalColor(int in_colorIndex);

	/*
	 * Sending "move" or "shockwave" event operations to other members in match
	*	Note: Specific Format needed for operation; for example = "\"move\","
	 */
	void LocalUserSendEvent(FVector2D in_inputPosition, FString in_operation);

	//Called from Cancel button from LoadingScreenWidget
	void JoinLobbyCancelled();

	// Called from Start button enabled only for Host in LobbyWidget
	void SendUpdateReady();

	void JoinMatch();
	
//Callbacks
	void AuthenticateCallback();
	
	void FindLobby();

	virtual void rttCallback(const FString &jsonData) override;

	virtual void relayCallback(int netId, const TArray<uint8>& bytes) override;

	virtual void relaySystemCallback(const FString& jsonResponse) override;

	virtual void relayConnectSuccess(const FString& jsonResponse) override { }

	virtual void relayConnectFailure(const FString& errorMessage) override;

//BrainCloud responses/calls
	
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void InitBrainCloud();

	void DisconnectEverything();
	
private:
	
	void IsLocalUserHost(const TSharedPtr<FJsonObject>& in_jsonPacket);

	void CheckMembers(const TSharedPtr<FJsonObject>& in_jsonPacket);

	void UpdateIDs(const TSharedPtr<FJsonObject>& in_jsonPacket);

	void ConnectToRelay();
public:
//Helper Functions
	FString GetBrainCloudVersion();

	bool IsUserAuthenticated();

	UFUNCTION()
	void DelayToFinishLoadingScreen();

	UFUNCTION()
	void DelayToFinishEndMatchLoading();

	void StartLoadingTimer();

	void EndMatch();

private:
	FString GetProfileIdFromCxId(FString in_data);

	FString MakeJsonExtraString() const;

public:

    UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
    FString ServerURL;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
    FString AppID;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Credentials")
    FString SecretKey;
    
	UPROPERTY(Category="Braincloud", BlueprintReadWrite, EditAnywhere)
	FString AlgoJson;
	
	UPROPERTY(Category="Braincloud", EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UOtherMatchUserWidget> OtherCursorWidgetReference;
	
	UPROPERTY()
	URelayGameInstance* GameInstance;
	
	UPROPERTY()
	FString LocalProfileID;
private:
	
	UPROPERTY()
	int CallbackNetID;

	UPROPERTY()
	FString LobbyID;
	
	UPROPERTY()
	FString OwnerID;

	UPROPERTY()
	UBrainCloudWrapper* BrainCloudWrapper;

	UPROPERTY()
	FTimerHandle DelayTimerHandle;

	UPROPERTY()
	FTimerHandle DelayTimerForEndMatchHandle;

	//Relay Connection References
	FString Address;
	int Port;
	FString Passcode;

	class GameRelayCallback* Callback;
	bool bIsHost;
	bool bIsReady;
	bool bPresentAfterRelayStarted;
	bool bRTTConnectionIsLive;
	bool bEndMatchRequested;
	int64 ToAllPlayersNetID = 1099511627775;
	const float LoadingTime = 2.5;
	const float EndMatchLoadingTime = 1.0;
};
