// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainGameActor.generated.h"

UCLASS()
class TAPPYCHICKEN_API AMainGameActor : public AActor
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable,Category="Interface")
	FString BCBytesToString(TArray<uint8> in_data);
	
	UFUNCTION(BlueprintCallable,Category="Interface")
	TArray<uint8> BCStringToBytes(const FString &in_string);

};
