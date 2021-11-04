// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRTTCallback.h"
#include "IRelayCallback.h"
#include "IServerCallback.h"
#include "RelayStructures.generated.h"
/**
 * 
 */

// Screen state enum.
UENUM(Blueprintable)
enum class GameStateBC : uint8
{
	Login,          /* Login screen */
    LoggingIn,
    MainMenu,       /* Main menu */
    JoiningLobby,
    Lobby,          /* Lobby screen */
    Starting,
    Game            /* Game screen */
};

USTRUCT(BlueprintType)
struct FMousePointBC
{
	GENERATED_BODY()
	int x=0, y=0;
};

// A brainCloud user
USTRUCT(BlueprintType)
struct FUserBC
{
	GENERATED_BODY()
	FUserBC(
		FString id="",
		FString name="",
		int colorIndex = 0,
		bool isReady=false,
		bool isAlive=false,
		bool allowSendTo=true,
		FMousePointBC pos = {0,0}) { }
	
	FString id="";         /* Profile Id */
	FString name="";       /* User name */
	int colorIndex = 7;
	bool isReady = false;
	bool isAlive = false;
	bool allowSendTo = true;
	FMousePointBC pos = {0, 0};
};

USTRUCT(BlueprintType)
struct FLobbyBC
{
	GENERATED_BODY()
	FString lobbyId;
	FString ownerId;
	TArray<FUserBC> members;

	void Clear()
	{
		lobbyId="";
		ownerId="";
		members.Empty();
	};
};

USTRUCT(BlueprintType)
struct FServerBC
{
	GENERATED_BODY()
	FString host;
	int wsPort = -1;
	int tcpPort = -1;
	int udpPort = -1;
	FString passcode;
	FString lobbyId;

	void Clear()
	{
		host="";
		wsPort = -1;
		tcpPort = -1;
		udpPort = -1;
		passcode="";
		lobbyId="";
	
	}
};

USTRUCT(BlueprintType)
struct FShockwaveBC
{
	GENERATED_BODY()
	FMousePointBC pos;
	int colorIndex;
};

USTRUCT(BlueprintType)
struct FPlayerContainerBC
{
	GENERATED_BODY()
	GameStateBC screenState = GameStateBC::Login;   /* Current screen we are on */
	FUserBC user;                                      /* Our user */
	FLobbyBC lobby;                                    /* Lobby with its members as received from brainCloud Lobby Service */
	FServerBC server;                                  /* Server info (IP, port, protocol, passcode) */
	TArray<FShockwaveBC> shockwaves;              /* Players' created shockwaves */
	int mouseX = 0;
	int mouseY = 0;
};

UCLASS()
class RELAYTESTAPP_API URelayStructures : public UObject
{
	GENERATED_BODY()
};

/*
//Callback classes
 
class ServerBCCallback final : public IServerCallback
{
	// IServerCallback interface
	virtual void serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString& jsonData) override;
	virtual void serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode, const FString& jsonError) override;
};


class RTTCallback final : public IRTTCallback
{
	
public:
	void rttCallback(const FString& dataJson) override
	{
		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(dataJson);
		TSharedPtr<FJsonObject> eventJson;
		
		if (FJsonSerializer::Deserialize(JsonReader,eventJson))
		{
			auto service = eventJson->GetStringField("services");
			//ARelayNetworkInterface::GetInterface()->OnLobbyEvent(service);
			

			UE_LOG(LogTemp,Log,TEXT("RTT Called back"));
		}
	}
};

// brainCloud Relay Connection callbacks
class RelayConnectCallback final : public IRelayConnectCallback
{
	bool ignoreFailure = false;
public:
	void relayConnectSuccess(const FString& jsonResponse) override
	{
		//BrainCloudInterface->Isloading=false;
	}

	void relayConnectFailure(const FString& errorMessage) override
	{
		if (!ignoreFailure)
		{
			//BrainCloudInterface->serverError("Failed to connect to server, msg: " + errorMessage);
		}
	}
};

// brainCloud Relay callbacks
class RelayCallback final : public IRelayCallback
{
public:
	virtual void relayCallback(const TArray<uint8>& jsonData) override
	{
		//TSharedPtr<FJsonObject> JsonParsed;
		//TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(jsonData);
		UE_LOG(LogTemp,Log,TEXT("RelayCallback !!"));
	}
};

// brainCloud Relay System callbacks

class RelaySystemCallback final : public BrainCloud::IRelaySystemCallback
{
public:
	void relaySystemCallback(const std::string& jsonResponse) override
	{
		Json::Value json;
		Json::Reader reader;
		reader.parse(jsonResponse, json);
		onRelaySystemMessage(json);
	}
};


class RTTConnectCallback final : public IRTTConnectCallback
{
public:
	void rttConnectSuccess() override
	{
		//onRTTConnected();
	}

	void rttConnectFailure(const FString& errorMessage) override
	{
		//dieWithMessage("Disconnected from RTT:\n" + errorMessage);
	}
};
*/
