// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ids.h"
#include "BasicDemo5GameMode.generated.h"

UCLASS(minimalapi)
class ABasicDemo5GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABasicDemo5GameMode();

  /**
	* Get the secret ids for the app
	*/
  UFUNCTION(BlueprintCallable, Category = "BasicDemo5")
  static FString getServerUrl(){
		return TEXT(BRAINCLOUD_SERVER_URL);
  }
    /**
      * Get the secret ids for the app
      */
    UFUNCTION(BlueprintCallable, Category = "BasicDemo5")
    static FString getAppId(){
          return TEXT(BRAINCLOUD_APP_ID);
    }
    
    /**
      * Get the secret ids for the app
      */
    UFUNCTION(BlueprintCallable, Category = "BasicDemo5")
    static FString getSecretKey(){
          return TEXT(BRAINCLOUD_APP_SECRET);
    }
};



