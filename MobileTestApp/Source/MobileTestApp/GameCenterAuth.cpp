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

	TWeakObjectPtr<UGameCenterAuthAction> WeakThis(this);

	dispatch_async(dispatch_get_main_queue(), ^{

		GKLocalPlayer* LocalPlayer = [GKLocalPlayer localPlayer];

		// -----------------------------------------------------------------
		// Inner block: called once we know the player is authenticated.
		// Calls GKLocalPlayer FetchItems and marshals results to game thread.
		// -----------------------------------------------------------------
		void (^FetchVerificationItems)(GKLocalPlayer*) = ^(GKLocalPlayer* Player) {

			// Collect IDs synchronously on this thread before any async hop.
			NSString* ObjCGamePlayerId = nil;
			NSString* ObjCTeamPlayerId = nil;

			// gamePlayerID / teamPlayerID were introduced in iOS 12.4 / 13.0
			// Fall back to the deprecated playerID on older OS versions.
			if (@available(iOS 12.4, macOS 10.14.6, *)) {
				ObjCGamePlayerId = Player.gamePlayerID;
			} else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
				ObjCGamePlayerId = Player.playerID;
#pragma clang diagnostic pop
			}

			if (@available(iOS 13.0, macOS 10.15, *)) {
				ObjCTeamPlayerId = Player.teamPlayerID;
			} else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
				ObjCTeamPlayerId = Player.playerID;
#pragma clang diagnostic pop
			}

			FString GamePlayerId = ObjCGamePlayerId
				? FString(UTF8_TO_TCHAR([ObjCGamePlayerId UTF8String])) : FString();
			FString TeamPlayerId = ObjCTeamPlayerId
				? FString(UTF8_TO_TCHAR([ObjCTeamPlayerId UTF8String])) : FString();
			FString DisplayName  = Player.displayName
				? FString(UTF8_TO_TCHAR([Player.displayName UTF8String])) : FString();

			// Completion block shared by both the modern and legacy fetch APIs.
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
					{
						PublicKeyUrlStr = FString(UTF8_TO_TCHAR([UrlString UTF8String]));
					}
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

			// fetchItemsForIdentityVerificationSignature: was added in iOS 13.5 / macOS 10.15.5.
			// Use the legacy API on older OS versions.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
			if (@available(iOS 13.5, macOS 10.15.5, *))
			{
				[Player fetchItemsForIdentityVerificationSignature:FetchCallback];
			}
			else
			{
				[Player generateIdentityVerificationSignatureWithCompletionHandler:FetchCallback];
			}
#pragma clang diagnostic pop

		}; // end FetchVerificationItems

		// -----------------------------------------------------------------
		// If already authenticated, skip straight to fetching items.
		// -----------------------------------------------------------------
		if (LocalPlayer.isAuthenticated)
		{
			FetchVerificationItems(LocalPlayer);
			return;
		}

		// -----------------------------------------------------------------
		// Set authenticateHandler to trigger the GameCenter sign-in flow.
		// The handler may be called more than once:
		//   • First call: ViewController != nil  → present it; wait for sign-in
		//   • Next call:  ViewController == nil  → check isAuthenticated
		// -----------------------------------------------------------------
#if PLATFORM_IOS
		LocalPlayer.authenticateHandler = ^(UIViewController* ViewController, NSError* AuthError)
		{
			if (ViewController != nil)
			{
				// Present the GameCenter sign-in UI and wait for the next handler invocation.
				dispatch_async(dispatch_get_main_queue(), ^{
					UIWindow* KeyWindow = nil;
					for (UIWindow* Win in [UIApplication sharedApplication].windows)
					{
						if (Win.isKeyWindow) { KeyWindow = Win; break; }
					}
					UIViewController* RootVC = KeyWindow.rootViewController;
					while (RootVC.presentedViewController)
					{
						RootVC = RootVC.presentedViewController;
					}
					[RootVC presentViewController:ViewController animated:YES completion:nil];
				});
				return; // handler fires again after sign-in completes
			}

			GKLocalPlayer* Player = [GKLocalPlayer localPlayer];
			if (Player && Player.isAuthenticated)
			{
				FetchVerificationItems(Player);
			}
			else if (AuthError != nil)
			{
				// Only fail when GameCenter gives us an explicit error.
				// ViewController==nil + isAuthenticated==false + no error means auth is still
				// in progress; the handler will be called again when it resolves.
				FString ErrorMsg = FString(UTF8_TO_TCHAR([[AuthError localizedDescription] UTF8String]));

				AsyncTask(ENamedThreads::GameThread, [WeakThis, ErrorMsg]()
				{
					if (UGameCenterAuthAction* Action = WeakThis.Get())
					{
						FGameCenterAuthResult Result;
						Result.ErrorMessage = ErrorMsg;
						Action->BroadcastFailure(Result);
					}
				});
			}
		};

#elif PLATFORM_MAC
		// On macOS, GameCenter handles the sign-in UI at the system level.
		// The handler is called several times; only act once the state is resolved.
		LocalPlayer.authenticateHandler = ^(NSViewController* ViewController, NSError* AuthError)
		{
			// A non-nil ViewController means GameCenter is managing auth UI.
			// Return and wait — the handler fires again once the user resolves it.
			if (ViewController != nil)
			{
				return;
			}

			GKLocalPlayer* Player = [GKLocalPlayer localPlayer];
			if (Player && Player.isAuthenticated)
			{
				FetchVerificationItems(Player);
			}
			else if (AuthError != nil)
			{
				// Only fail on an explicit error from GameCenter.
				// ViewController==nil + isAuthenticated==false + no error means auth is still
				// in progress; the handler will be called again when it resolves.
				FString ErrorMsg = FString(UTF8_TO_TCHAR([[AuthError localizedDescription] UTF8String]));

				AsyncTask(ENamedThreads::GameThread, [WeakThis, ErrorMsg]()
				{
					if (UGameCenterAuthAction* Action = WeakThis.Get())
					{
						FGameCenterAuthResult Result;
						Result.ErrorMessage = ErrorMsg;
						Action->BroadcastFailure(Result);
					}
				});
			}
		};
#endif

	}); // end dispatch_async(main_queue)

#else
	// GameCenter is only available on iOS and macOS.
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
