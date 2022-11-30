// Copyright 2022 bitHeads, Inc. All Rights Reserved.

#pragma once

#include "BCInitHelpers.generated.h"

USTRUCT(BlueprintType)
struct FBrainCloudInitParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brainCloud Init Params")
	FString ServerUrl = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brainCloud Init Params")
		FString AppId = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brainCloud Init Params")
		FString Secret = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brainCloud Init Params")
		FString Version = "";
};

USTRUCT(BlueprintType)
struct FLobbyMemberData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		FString profileId = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		FString name = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		FString pic = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		int rating = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		bool isReady = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		FString extraDataJson = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Member Data")
		FString cxId = "";
};


USTRUCT(BlueprintType)
struct FBrainCloudPlayerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	FString PlayerName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	FString EmailAddress = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	int ExperiencePoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	int Level = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	FString PictureURL = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	FString StatisticsJson = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Data")
	FLobbyMemberData LobbyMemberData;
};

USTRUCT(BlueprintType)
struct FRoomData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data")
		FString LobbyId = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data")
		FString Address = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data")
		int PortUDP = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data")
		int PortTCP = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data")
		int PortWS = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data")
		FString Passcode = "";
};

USTRUCT(BlueprintType)
struct FLobbyData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		FString LobbyId = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		FString State = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		FString Rating = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		FString LobbyTypeID = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		int MinUsers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		int MaxUsers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		TArray<FLobbyMemberData> Members;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		FString LobbyLeaderCxId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lobby Data")
		FRoomData RoomData;
};

UCLASS(MinimalAPI)
class UBCInitHelpers : public UObject
{
	GENERATED_BODY()
public:
	UBCInitHelpers(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "BC Init Helpers")
		static FBrainCloudInitParams InitializeFromFile();

	UFUNCTION(BlueprintCallable, Category = "BC Init Helpers")
		static FBrainCloudInitParams InitializeFromHeader();

	UFUNCTION(BlueprintCallable, Category = "Conversion Helpers")
		static TArray<uint8> ConvertStringToBytes(FString inputString);

	UFUNCTION(BlueprintCallable, Category = "Conversion Helpers")
		static FString ConvertBytesToString(TArray<uint8> inputBytes);
};

