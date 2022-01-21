// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BCBlueprintCallProxyBase.h"
#include "GameFramework/Actor.h"
#include "BrainCloudWrapper.h"

#include "RelayNetworkInterface.generated.h"

class URelayGameInstance;
class UVaRestJsonObject;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRelayInterfaceCallbackDelegate, FString, JsonData, FBC_ReturnData, AdditionalData);
DECLARE_DELEGATE_TwoParams(FRelayInterfaceCallbackDelegate,FString,FBC_ReturnData);

UCLASS()
class RELAYTESTAPPCPP_API ARelayNetworkInterface : public AActor, public IServerCallback
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

	//Event functions
	UFUNCTION(BlueprintNativeEvent, Category="RelayGameInstance")
	void LoginUniversalBC(FString& in_Username, FString& in_Password);

	static void AuthenticateCallback(FString jsonData, FBC_ReturnData responseData);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void InitBrainCloud();
	
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void OnFailureCallback(FString in_ErrorMessage, FString in_Operation);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void UpdateIDs();

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void IsLocalUserHost();

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void CheckMembers();

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FLinearColor DetermineColorIndex(int in_ColorIndex);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	void RemovingLeavingUser(FString in_memberID);
	
	//Used to remove app id from responding data
	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetProfileIdFromString(FString in_data);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetProfileIDFromNetID(int in_netId,UBrainCloudWrapper* in_wrapper);

	UFUNCTION(BlueprintCallable,Category="RelayInterface")
	FString GetBrainCloudVersion(UBrainCloudWrapper* in_wrapper);

	//Callbacks
	//Response delegates

	FRelayInterfaceCallbackDelegate OnSuccess;
	FRelayInterfaceCallbackDelegate OnFailure;

	//callbacks
	virtual void serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString &jsonData) override
	{
		FBC_ReturnData returnData = FBC_ReturnData(serviceName.getValue(), serviceOperation.getValue(), 200, 0);

		if(serviceOperation.getValue() == "Authenticate")
		{
			//stuff
		}
		cleanup();
	}

	virtual void serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode, const FString &jsonError) override
	{
		FBC_ReturnData returnData = FBC_ReturnData(serviceName.getValue(), serviceOperation.getValue(), statusCode, reasonCode);
		//OnFailure.Broadcast(jsonError, returnData);
        
		cleanup();
	}
private:
	bool _bCleanupAfterFirstResponse = true;
	void cleanup()
	{
		if (_bCleanupAfterFirstResponse)
		{
			// allow it to be removed, if no longer referenced
			this->RemoveFromRoot();
			this->ConditionalBeginDestroy();
		}
	}
	
	/*************Variables************/
public:
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString ServerURL;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString SecretKey;
	UPROPERTY(Category="Braincloud",EditAnywhere,BlueprintReadWrite)
	FString AppID;
	UPROPERTY()
	URelayGameInstance* GameInstance;
	UPROPERTY()
	UBrainCloudWrapper* BrainCloudWrapper;

	bool IsHost;
	bool IsReady;
	bool RTTConnectionIsLive;
	bool CancelRequested;
	int64 ToAllPlayersNetID = 1099511627775;
	

		/**********JSON References**********/
	//Errors for VARestJsonObject
	//  RelayNetworkInterface.gen.cpp(23): [C4430] missing type specifier - int assumed. Note: C++ does not support default-int
	//    RelayNetworkInterface.gen.cpp(23): [C2146] syntax error: missing ';' before identifier 'UClass'
	//  RelayNetworkInterface.gen.cpp(557): [C2065] 'Z_Construct_UClass_UVaRestJsonObject_NoRegister': undeclared identifier
	
	/*UPROPERTY()
	UVaRestJsonObject* LobbyCallbackJson;
	UPROPERTY()
	UVaRestJsonObject* RelayDataCallbackJson;
	UPROPERTY()
	UVaRestJsonObject* RelaySystemCallbackJson;
	UPROPERTY()
	UVaRestJsonObject* AuthenticateCallbackJson;*/
	UPROPERTY(Category="Braincloud",BlueprintReadWrite,EditAnywhere)
	FString AlgoJson;

		/********** ID's **********/
	FString ColorIndex;
	FString LobbyID;
	TArray<FString> UserCXIDs;
	FString OwnerID;
	TMap<int,FString> ProfileIDToNetID;
	int CallbackNetID;
	FString LocalProfileID;

	
	
};
