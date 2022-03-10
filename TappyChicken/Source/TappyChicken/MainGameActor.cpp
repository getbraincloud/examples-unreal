// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameActor.h"

#include <ConvertUtilities.h>

FString AMainGameActor::BCBytesToString(TArray<uint8> in_data)
{
	FString parsedMessage = ConvertUtilities::BCBytesToString(in_data.GetData(), in_data.Num());
	return parsedMessage;
}

TArray<uint8> AMainGameActor::BCStringToBytes(const FString& in_string)
{
	TArray<uint8> data;
	data.AddUninitialized(in_string.Len());
	ConvertUtilities::BCStringToBytes(in_string, data.GetData(), in_string.Len());
	return data;
}

