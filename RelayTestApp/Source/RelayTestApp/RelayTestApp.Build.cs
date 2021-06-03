// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RelayTestApp : ModuleRules
{
	public RelayTestApp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "BCClientPlugin", "OnlineSubsystem", "OnlineSubsystemUtils", "Sockets" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Json", "OnlineSubsystem" });
        
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
        
		DynamicallyLoadedModuleNames.Add("OnlineSubsystemBrainCloud");
	}
}
