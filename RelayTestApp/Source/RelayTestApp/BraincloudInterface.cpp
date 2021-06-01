// Fill out your copyright notice in the Description page of Project Settings.
#include "BraincloudInterface.h"
#include "ServiceName.h"
#include "BrainCloudWrapper.h"
#include "ServiceOperation.h"



// Sets default values
ABraincloudInterface::ABraincloudInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABraincloudInterface::BeginPlay()
{
	Super::BeginPlay();
	BraincloudInit();
}

// Called every frame
void ABraincloudInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(_bcWrapper!=nullptr)
	{
		_bcWrapper->runCallbacks();
	}
}

void ABraincloudInterface::BraincloudInit()
{
	_bcWrapper = NewObject<UBrainCloudWrapper>();
	_bcWrapper->setWrapperName("wrapper");
	
	//ToDo: Need to get version from client
	_bcWrapper->initialize(ServerURL,SecretKey,AppID,"1.0");
}

void ABraincloudInterface::LoginUniversal(FString username,FString password)
{
	_bcWrapper->authenticateUniversal(username,password,true,this);
	UE_LOG(LogTemp, Log, TEXT("Loggin in..."));
	IsLoading = true;
}

void ABraincloudInterface::FindLobby()
{
	/*
	* // Enable RTT
	pBCWrapper->getRTTService()->registerRTTLobbyCallback(&bcRTTCallback);
	pBCWrapper->getRTTService()->enableRTT(&bcRTTConnectCallback, false);
	 */
	IsLoading = true;
	//BCCallback *lobbyCallback=
	//_bcWrapper->getRTTService()->registerRTTLobbyCallback(this);
	//_bcWrapper->getRTTService()->enableRTT(BCRTTConnectionType::WEBSOCKET)
}

void ABraincloudInterface::serverCallback(ServiceName serviceName, ServiceOperation serviceOperation,
                                          const FString& jsonData)
{
	IsLoading = false;
	GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Hello"));
	UE_LOG(LogTemp, Log, TEXT("Hello"));
	if(serviceName == ServiceName::AuthenticateV2)
	{
		GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Authenticated!"));
		UE_LOG(LogTemp, Log, TEXT("Authenticated!"));	
		
	}
	else if(serviceName==ServiceName::Time)
	{
		GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Reading the Time...."));
		UE_LOG(LogTemp, Log, TEXT("Reading the Time...."));
	}
}

void ABraincloudInterface::serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode,
	int32 reasonCode, const FString& jsonError)
{
	IsLoading=false;
	ErrorMessage=jsonError;
	//ErrorOccured is watched within Game level blueprint within its tick
	//When this is true, a pop up dialog will appear and show the jsonError that occured.
	ErrorOccured=true;
}

void ABraincloudInterface::rttCallback(const FString& jsonData)
{
}


