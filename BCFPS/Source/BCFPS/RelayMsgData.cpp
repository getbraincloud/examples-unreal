#include "RelayMsgData.h"

void URelayMsgUtils::SetOperation(OperationType op, UPARAM(ref) FRelayMsgData& data)
{
	data.op = op;
}

void URelayMsgUtils::AddString(FString key, FString value, UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> bytes;
	const TCHAR* charArray = *value;

	int32 numBytes = FCString::Strlen(charArray) * sizeof(TCHAR);

	bytes.SetNum(numBytes);
	memcpy(bytes.GetData(), charArray, numBytes);

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

void URelayMsgUtils::AddInt(FString key, int value, UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> bytes;
	bytes.SetNum(sizeof(value));
	memcpy(bytes.GetData(), &value, sizeof(value));

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

void URelayMsgUtils::AddFloat(FString key, float value, UPARAM(ref)FRelayMsgData& data)
{
	TArray<uint8> bytes;
	bytes.SetNum(sizeof(value));
	memcpy(bytes.GetData(), &value, sizeof(value));

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

void URelayMsgUtils::AddDouble(FString key, double value, UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> bytes;
	bytes.SetNum(sizeof(value));
	memcpy(bytes.GetData(), &value, sizeof(value));

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

void URelayMsgUtils::AddVector(FString key, FVector value, UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> bytes;
	bytes.SetNum(sizeof(value));
	memcpy(bytes.GetData(), &value, sizeof(value));

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

void URelayMsgUtils::AddRotator(FString key, FRotator value, UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> bytes;
	bytes.SetNum(sizeof(value));
	memcpy(bytes.GetData(), &value, sizeof(value));

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

void URelayMsgUtils::AddBool(FString key, bool value, UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> bytes;
	bytes.SetNum(sizeof(value));
	memcpy(bytes.GetData(), &value, sizeof(value));

	FRelayMsgValue val = FRelayMsgValue();
	val.bytesData = bytes;

	data.Data.Add(key, val);
}

FString URelayMsgUtils::GetString(FString key, UPARAM(ref) FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return FString();
	}

	TArray<uint8> bytes = data.Data[key].bytesData;

	int32 numChars = bytes.Num() / sizeof(TCHAR);

	TCHAR* charArray = new TCHAR[numChars + 1];

	memcpy(charArray, bytes.GetData(), bytes.Num());

	charArray[numChars] = '\0';

	FString resultString(charArray);
	
	delete[] charArray;

	return resultString;
}

int URelayMsgUtils::GetInt(FString key, UPARAM(ref) FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return 0;
	}

	TArray<uint8> bytes = data.Data[key].bytesData;
	int32 resultInt;
	memcpy(&resultInt, bytes.GetData(), sizeof(int32));

	return resultInt;
}

float URelayMsgUtils::GetFloat(FString key, UPARAM(ref)FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return 0;
	}

	TArray<uint8> bytes = data.Data[key].bytesData;
	float resultFloat;
	memcpy(&resultFloat, bytes.GetData(), sizeof(float));

	return resultFloat;
}

double URelayMsgUtils::GetDouble(FString key, UPARAM(ref) FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return 0;
	}

	TArray<uint8> bytes = data.Data[key].bytesData;
	double resultDouble;
	memcpy(&resultDouble, bytes.GetData(), sizeof(double));

	return resultDouble;
}

FVector URelayMsgUtils::GetVector(FString key, UPARAM(ref) FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return FVector();
	}

	TArray<uint8> bytes = data.Data[key].bytesData;
	FVector resultVector;
	memcpy(&resultVector, bytes.GetData(), sizeof(FVector));

	return resultVector;
}

FRotator URelayMsgUtils::GetRotator(FString key, UPARAM(ref) FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return FRotator();
	}

	TArray<uint8> bytes = data.Data[key].bytesData;
	FRotator resultRotator;
	memcpy(&resultRotator, bytes.GetData(), sizeof(FRotator));

	return resultRotator;
}

bool URelayMsgUtils::GetBool(FString key, UPARAM(ref) FRelayMsgData& data)
{
	if (!data.Data.Contains(key)) {
		return false;
	}

	TArray<uint8> bytes = data.Data[key].bytesData;
	bool resultBool;
	memcpy(&resultBool, bytes.GetData(), sizeof(bool));

	return resultBool;
}

TArray<uint8> URelayMsgUtils::SerializeMap(UPARAM(ref) FRelayMsgData& data)
{
	TArray<uint8> resultBytes;

	uint8 operationByte = static_cast<uint8>(data.op);
	resultBytes.Add(operationByte);

	for (const auto& pair : data.Data)
	{
		FString key = pair.Key;
		TArray<uint8> value = pair.Value.bytesData;
		//Serialize key
		int32 KeyNumBytes = key.Len() * sizeof(TCHAR);
		resultBytes.Append(reinterpret_cast<const uint8*>(&KeyNumBytes), sizeof(int32));
		resultBytes.Append(reinterpret_cast<const uint8*>(key.GetCharArray().GetData()), KeyNumBytes);

		FString ByteString = FString::FromBlob(value.GetData(), value.Num());
		// Serialize value
		int32 ValueNumBytes = value.Num() * sizeof(uint8);
		resultBytes.Append(reinterpret_cast<const uint8*>(&ValueNumBytes), sizeof(int32));
		resultBytes.Append(reinterpret_cast<const uint8*>(value.GetData()), ValueNumBytes);
	}

	return resultBytes;
}

void URelayMsgUtils::DeserializeBytesToMap(FRelayMsgData& data, TArray<uint8> bytes)
{
	data = FRelayMsgData();

	TMap<FString, FRelayMsgValue> Result;

	// Deserialize OperationType enum
	OperationType op = static_cast<OperationType>(bytes[0]);
	int32 NumBytesRead = sizeof(OperationType);

	data.op = op;

	while (NumBytesRead < bytes.Num())
	{
		// Deserialize key
		int32 KeyNumBytes = *reinterpret_cast<const int32*>(&bytes[NumBytesRead]);
		NumBytesRead += sizeof(int32);

		FString Key(reinterpret_cast<const TCHAR*>(&bytes[NumBytesRead]), KeyNumBytes / sizeof(TCHAR));
		Key.RemoveAt(Key.Len() - 1);
		NumBytesRead += KeyNumBytes;

		// Deserialize value
		int32 ValueNumBytes = *reinterpret_cast<const int32*>(&bytes[NumBytesRead]);
		NumBytesRead += sizeof(int32);
		TArray<uint8> Value;
		Value.Append(reinterpret_cast<const uint8*>(&bytes[NumBytesRead]), ValueNumBytes);
		NumBytesRead += ValueNumBytes;

		FRelayMsgValue val = FRelayMsgValue();
		val.bytesData = Value;

		Result.Add(Key, val);
	}
	/*
	UE_LOG(LogTemp, Log, TEXT("Deserialized array [start]"));
	for (auto pair : Result) 
	{
		FString ByteString = FString::FromBlob(pair.Value.bytesData.GetData(), pair.Value.bytesData.Num());
		UE_LOG(LogTemp, Log, TEXT("%s : %s"), *pair.Key, *ByteString);
	}
	UE_LOG(LogTemp, Log, TEXT("Deserialized array [end]"));
	*/

	data.Data = Result;
}
