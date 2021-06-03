// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RelayTestApp : ModuleRules
{
	public RelayTestApp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","BCClientPlugin" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Json", "JsonUtilities" });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore"});
		
		//Note: This is meant to speed up hot reloads when recompiling code.
		MinFilesUsingPrecompiledHeaderOverride = 1;
		bFasterWithoutUnity = true;
		
		// Uncomment if you are using online features
		//PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
