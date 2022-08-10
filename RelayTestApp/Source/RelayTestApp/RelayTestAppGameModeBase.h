// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ids.h"
#include "RelayTestAppGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RELAYTESTAPP_API ARelayTestAppGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

    /**
      * Get the secret ids for the app
      */
    UFUNCTION(BlueprintCallable, Category = "RelayTestApp5")
    static FString getServerUrl(){
          return TEXT(BRAINCLOUD_SERVER_URL);
    }
      /**
        * Get the secret ids for the app
        */
      UFUNCTION(BlueprintCallable, Category = "RelayTestApp5")
      static FString getAppId(){
            return TEXT(BRAINCLOUD_APP_ID);
      }
      
      /**
        * Get the secret ids for the app
        */
      UFUNCTION(BlueprintCallable, Category = "RelayTestApp5")
      static FString getSecretKey(){
            return TEXT(BRAINCLOUD_APP_SECRET);
      }
  };

