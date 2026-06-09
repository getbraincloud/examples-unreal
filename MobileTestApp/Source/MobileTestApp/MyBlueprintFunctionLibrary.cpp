// Copyright 2026 bitHeads, Inc. All Rights Reserved.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
	FString Ret("");
	if (wrapper == nullptr) return Ret;
	  
    // add some developer code here
    Ret = "Wrapper initialized.";
	return Ret;
}

