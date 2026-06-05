// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameCenterAuth.generated.h"

/**
 * All data returned from GameCenter authentication + identity verification.
 *
 * To verify server-side (e.g. with brainCloud authenticateGameCenter):
 *   - Base64-encode Signature and Salt
 *   - Send GamePlayerId, TeamPlayerId, PublicKeyUrl, Signature (B64), Salt (B64), Timestamp
 */
USTRUCT(BlueprintType)
struct FGameCenterAuthResult
{
	GENERATED_BODY()

	/** Unique player ID scoped to this game (GKLocalPlayer.gamePlayerID). */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	FString GamePlayerId;

	/** Unique player ID scoped to your developer team (GKLocalPlayer.teamPlayerID). */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	FString TeamPlayerId;

	/** Player's GameCenter display name. */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	FString DisplayName;

	/** URL to Apple's public key — download and use it on your server to verify Signature. */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	FString PublicKeyUrl;

	/** Raw signature bytes from GKLocalPlayer FetchItems. Base64-encode before sending to server. */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	TArray<uint8> Signature;

	/** Raw salt bytes from GKLocalPlayer FetchItems. Base64-encode before sending to server. */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	TArray<uint8> Salt;

	/** Unix timestamp (seconds since epoch) when the signature was generated. */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	int64 Timestamp = 0;

	/** Describes the failure; empty on success. */
	UPROPERTY(BlueprintReadOnly, Category = "GameCenter")
	FString ErrorMessage;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameCenterAuthComplete, FGameCenterAuthResult, Result);

/**
 * Async Blueprint node that:
 *   1. Authenticates the local player with GameCenter (presents system UI if needed).
 *   2. Calls GKLocalPlayer FetchItems to obtain PublicKeyUrl, Signature, Salt, and Timestamp
 *      for server-side identity verification.
 *
 * Supported: iOS, macOS.  On other platforms OnFailure fires immediately.
 *
 * Blueprint usage:
 *   [Authenticate With Game Center] --OnSuccess--> use Result fields with your backend auth call
 *                                   --OnFailure--> show error from Result.ErrorMessage
 */
UCLASS()
class MOBILETESTAPP_API UGameCenterAuthAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	/** Fires when authentication and all identity-verification items are ready. */
	UPROPERTY(BlueprintAssignable)
	FOnGameCenterAuthComplete OnSuccess;

	/** Fires when authentication or identity-verification fails. */
	UPROPERTY(BlueprintAssignable)
	FOnGameCenterAuthComplete OnFailure;

	/**
	 * Authenticate the local player with GameCenter and retrieve identity-verification items.
	 * Connect the OnSuccess / OnFailure output pins to handle the result.
	 */
	UFUNCTION(BlueprintCallable,
		meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"),
		Category = "GameCenter")
	static UGameCenterAuthAction* AuthenticateWithGameCenter(UObject* WorldContextObject);

	virtual void Activate() override;

private:
	void BroadcastSuccess(FGameCenterAuthResult Result);
	void BroadcastFailure(FGameCenterAuthResult Result);
};

/**
 * Synchronous Blueprint helpers for querying the current GameCenter state.
 * These do NOT trigger authentication — use UGameCenterAuthAction for that.
 */
UCLASS()
class MOBILETESTAPP_API UGameCenterFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Returns true when running on a platform that supports GameCenter (iOS / macOS). */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GameCenter")
	static bool IsGameCenterSupported();

	/** Returns true if GKLocalPlayer is currently authenticated with GameCenter. */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GameCenter")
	static bool IsLocalPlayerAuthenticated();

	/**
	 * Returns the authenticated player's GameCenter display name.
	 * Returns an empty string when not authenticated or on an unsupported platform.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GameCenter")
	static FString GetLocalPlayerDisplayName();
};
