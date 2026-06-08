// Fill out your copyright notice in the Description page of Project Settings.

#include "GameCenterAuth.h"
#include "Async/Async.h"

#if PLATFORM_IOS || PLATFORM_MAC
#include <Foundation/Foundation.h>
#include <GameKit/GameKit.h>
#endif

// ─────────────────────────────────────────────────────────────────────────────
//  UGameCenterAuthAction
// ─────────────────────────────────────────────────────────────────────────────

UGameCenterAuthAction* UGameCenterAuthAction::AuthenticateWithGameCenter(UObject* WorldContextObject)
{
	UGameCenterAuthAction* Action = NewObject<UGameCenterAuthAction>();
	Action->RegisterWithGameInstance(WorldContextObject); // prevents GC while async is pending
	return Action;
}

void UGameCenterAuthAction::Activate()
{
#if PLATFORM_IOS || PLATFORM_MAC

	// Activate() is called on the UE game thread, which on Apple platforms IS the OS main
	// thread — so GameKit APIs are safe to call directly without dispatch_async.
	TWeakObjectPtr<UGameCenterAuthAction> WeakThis(this);
	GKLocalPlayer* LocalPlayer = [GKLocalPlayer localPlayer];

	// -----------------------------------------------------------------
	// Helper: dispatch a failure result back to the game thread.
	// -----------------------------------------------------------------
	auto DispatchFailure = [WeakThis](FString ErrorMsg)
	{
		AsyncTask(ENamedThreads::GameThread, [WeakThis, ErrorMsg]()
		{
			if (UGameCenterAuthAction* Action = WeakThis.Get())
			{
				FGameCenterAuthResult Result;
				Result.ErrorMessage = ErrorMsg;
				Action->BroadcastFailure(Result);
			}
		});
	};

	// -----------------------------------------------------------------
	// Inner block: called once the player is confirmed authenticated.
	// Calls GKLocalPlayer FetchItems and marshals results to game thread.
	// -----------------------------------------------------------------
	void (^FetchVerificationItems)(GKLocalPlayer*) = ^(GKLocalPlayer* Player) {

		NSString* ObjCGamePlayerId = nil;
		NSString* ObjCTeamPlayerId = nil;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
		if (@available(iOS 12.4, macOS 10.14.6, *)) {
			ObjCGamePlayerId = Player.gamePlayerID;
		} else {
			ObjCGamePlayerId = Player.playerID;
		}

		if (@available(iOS 13.0, macOS 10.15, *)) {
			ObjCTeamPlayerId = Player.teamPlayerID;
		} else {
			ObjCTeamPlayerId = Player.playerID;
		}
#pragma clang diagnostic pop

		FString GamePlayerId = ObjCGamePlayerId
			? FString(UTF8_TO_TCHAR([ObjCGamePlayerId UTF8String])) : FString();
		FString TeamPlayerId = ObjCTeamPlayerId
			? FString(UTF8_TO_TCHAR([ObjCTeamPlayerId UTF8String])) : FString();
		FString DisplayName  = Player.displayName
			? FString(UTF8_TO_TCHAR([Player.displayName UTF8String])) : FString();

		void (^FetchCallback)(NSURL*, NSData*, NSData*, uint64_t, NSError*) =
			^(NSURL* PublicKeyURL, NSData* Signature, NSData* Salt,
			  uint64_t Timestamp, NSError* FetchError)
		{
			if (FetchError)
			{
				FString ErrorMsg = FString(
					UTF8_TO_TCHAR([[FetchError localizedDescription] UTF8String]));

				AsyncTask(ENamedThreads::GameThread,
					[WeakThis, GamePlayerId, TeamPlayerId, DisplayName, ErrorMsg]()
				{
					if (UGameCenterAuthAction* Action = WeakThis.Get())
					{
						FGameCenterAuthResult Result;
						Result.GamePlayerId = GamePlayerId;
						Result.TeamPlayerId = TeamPlayerId;
						Result.DisplayName  = DisplayName;
						Result.ErrorMessage = ErrorMsg;
						Action->BroadcastFailure(Result);
					}
				});
				return;
			}

			FString PublicKeyUrlStr;
			if (PublicKeyURL)
			{
				NSString* UrlString = [PublicKeyURL absoluteString];
				if (UrlString)
					PublicKeyUrlStr = FString(UTF8_TO_TCHAR([UrlString UTF8String]));
			}

			TArray<uint8> SigBytes;
			if (Signature && [Signature length] > 0)
			{
				SigBytes.Append(
					reinterpret_cast<const uint8*>([Signature bytes]),
					static_cast<int32>([Signature length]));
			}

			TArray<uint8> SaltBytes;
			if (Salt && [Salt length] > 0)
			{
				SaltBytes.Append(
					reinterpret_cast<const uint8*>([Salt bytes]),
					static_cast<int32>([Salt length]));
			}

			int64 TimestampVal = static_cast<int64>(Timestamp);

			AsyncTask(ENamedThreads::GameThread,
				[WeakThis, GamePlayerId, TeamPlayerId, DisplayName,
				 PublicKeyUrlStr, SigBytes, SaltBytes, TimestampVal]()
			{
				if (UGameCenterAuthAction* Action = WeakThis.Get())
				{
					FGameCenterAuthResult Result;
					Result.GamePlayerId = GamePlayerId;
					Result.TeamPlayerId = TeamPlayerId;
					Result.DisplayName  = DisplayName;
					Result.PublicKeyUrl = PublicKeyUrlStr;
					Result.Signature    = SigBytes;
					Result.Salt         = SaltBytes;
					Result.Timestamp    = TimestampVal;
					Action->BroadcastSuccess(Result);
				}
			});
		}; // end FetchCallback

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
		if (@available(iOS 13.5, macOS 10.15.5, *))
			[Player fetchItemsForIdentityVerificationSignature:FetchCallback];
		else
			[Player generateIdentityVerificationSignatureWithCompletionHandler:FetchCallback];
#pragma clang diagnostic pop

	}; // end FetchVerificationItems

	// -----------------------------------------------------------------
	// Already authenticated? Go straight to fetching items.
	// -----------------------------------------------------------------
	if (LocalPlayer.isAuthenticated)
	{
		FetchVerificationItems(LocalPlayer);
		return;
	}

	// -----------------------------------------------------------------
	// Set authenticateHandler to drive the sign-in flow.
	//
	// Handler call semantics:
	//   ViewController != nil  → GameCenter is showing sign-in UI; wait for next call.
	//   isAuthenticated == true → sign-in succeeded; fetch items.
	//   anything else          → GameCenter declined/failed (with or without NSError);
	//                            this includes the nil/nil/false state that macOS emits
	//                            when the process is not a registered GameCenter app.
	// -----------------------------------------------------------------
#if PLATFORM_IOS
	LocalPlayer.authenticateHandler = ^(UIViewController* ViewController, NSError* AuthError)
	{
		if (ViewController != nil)
		{
			// Present the sign-in UI; handler fires again after the user responds.
			UIWindow* KeyWindow = nil;
			for (UIWindow* Win in [UIApplication sharedApplication].windows)
			{
				if (Win.isKeyWindow) { KeyWindow = Win; break; }
			}
			UIViewController* RootVC = KeyWindow.rootViewController;
			while (RootVC.presentedViewController)
				RootVC = RootVC.presentedViewController;
			[RootVC presentViewController:ViewController animated:YES completion:nil];
			return;
		}

		GKLocalPlayer* Player = [GKLocalPlayer localPlayer];
		if (Player && Player.isAuthenticated)
		{
			FetchVerificationItems(Player);
		}
		else
		{
			FString ErrorMsg = AuthError
				? FString(UTF8_TO_TCHAR([[AuthError localizedDescription] UTF8String]))
				: TEXT("GameCenter authentication failed or is not available for this application.");
			DispatchFailure(ErrorMsg);
		}
	};

#elif PLATFORM_MAC
	LocalPlayer.authenticateHandler = ^(NSViewController* ViewController, NSError* AuthError)
	{
		// A non-nil ViewController means GameCenter is managing sign-in UI.
		// Return and wait — the handler fires again after the user responds.
		if (ViewController != nil)
			return;

		GKLocalPlayer* Player = [GKLocalPlayer localPlayer];
		if (Player && Player.isAuthenticated)
		{
			FetchVerificationItems(Player);
		}
		else
		{
			FString ErrorMsg = AuthError
				? FString(UTF8_TO_TCHAR([[AuthError localizedDescription] UTF8String]))
				: TEXT("GameCenter authentication failed or is not available for this application.");
			DispatchFailure(ErrorMsg);
		}
	};
#endif

#else
	FGameCenterAuthResult Result;
	Result.ErrorMessage = TEXT("GameCenter is only supported on iOS and macOS.");
	BroadcastFailure(Result);
#endif
}

void UGameCenterAuthAction::BroadcastSuccess(FGameCenterAuthResult Result)
{
	OnSuccess.Broadcast(Result);
	SetReadyToDestroy();
}

void UGameCenterAuthAction::BroadcastFailure(FGameCenterAuthResult Result)
{
	OnFailure.Broadcast(Result);
	SetReadyToDestroy();
}

// ─────────────────────────────────────────────────────────────────────────────
//  UGameCenterFunctionLibrary
// ─────────────────────────────────────────────────────────────────────────────

bool UGameCenterFunctionLibrary::IsGameCenterSupported()
{
#if PLATFORM_IOS || PLATFORM_MAC
	return true;
#else
	return false;
#endif
}

bool UGameCenterFunctionLibrary::IsLocalPlayerAuthenticated()
{
#if PLATFORM_IOS || PLATFORM_MAC
	return [[GKLocalPlayer localPlayer] isAuthenticated];
#else
	return false;
#endif
}

FString UGameCenterFunctionLibrary::GetLocalPlayerDisplayName()
{
#if PLATFORM_IOS || PLATFORM_MAC
	GKLocalPlayer* LocalPlayer = [GKLocalPlayer localPlayer];
	if (LocalPlayer.isAuthenticated && LocalPlayer.displayName)
	{
		return FString(UTF8_TO_TCHAR([LocalPlayer.displayName UTF8String]));
	}
#endif
	return FString();
}
