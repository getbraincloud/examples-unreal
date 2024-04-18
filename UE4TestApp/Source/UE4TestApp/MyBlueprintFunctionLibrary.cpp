// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::RunCppFunction()
{
    // add some developer code here
    return FString::Printf(TEXT("Running dev test"));
}