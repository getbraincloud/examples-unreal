#pragma once

#include "CoreMinimal.h"
#include "RelayMsgData.generated.h"

UENUM(BlueprintType)
enum class OperationType : uint8 {
	PlayerTransformData,
	AnimData,
	PlayerSpawned,
	ObjectTransformData,
	ItemPickUp,
	ProjectileSpawned,
	PlayerHit,
	PlayerHitFx,
	PlayerRespawned,
	PlayerState,
	TimeUpdate,
	ScoreUpate
};

USTRUCT(BlueprintType)
struct FRelayMsgValue
{
	GENERATED_BODY()

	TArray<uint8> bytesData;
};

USTRUCT(BlueprintType)
struct FRelayMsgData 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Relay Message Data")
		OperationType op;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Relay Message Data")
		TMap<FString, FRelayMsgValue> Data;
};

UCLASS(BlueprintType)
class URelayMsgUtils : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void SetOperation(OperationType op, UPARAM(ref) FRelayMsgData& data);

	//adding values

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddString(FString key, FString value, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddInt(FString key, int value, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddFloat(FString key, float value, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddDouble(FString key, double value, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddVector(FString key, FVector value, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddRotator(FString key, FRotator value, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void AddBool(FString key, bool value, UPARAM(ref) FRelayMsgData& data);

	//getting values

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static FString GetString(FString key, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static int GetInt(FString key, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static float GetFloat(FString key, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static double GetDouble(FString key, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static FVector GetVector(FString key, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static FRotator GetRotator(FString key, UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static bool GetBool(FString key, UPARAM(ref) FRelayMsgData& data);

	//Serialization
	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static TArray<uint8> SerializeMap(UPARAM(ref) FRelayMsgData& data);

	UFUNCTION(BlueprintCallable, Category = "Relay Message Data")
		static void DeserializeBytesToMap(FRelayMsgData& data, TArray<uint8> bytes);
};

