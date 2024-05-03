// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
	FString Ret("");
	if (wrapper == nullptr) return Ret;
	  
    // add some developer code here
    Ret = "Wrapper initialized.";
	return Ret;
}

