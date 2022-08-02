<<<<<<< HEAD:DonutTag/Source/DonutTag/DonutTag.Build.cs
// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class DonutTag : ModuleRules
{
	public DonutTag(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
=======
// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RelayTestAppCPP : ModuleRules
{
	public RelayTestAppCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "BCClientPlugin", "OnlineSubsystem", "OnlineSubsystemUtils", "Sockets", "SlateCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Json", "OnlineSubsystem" });
        
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
        
		DynamicallyLoadedModuleNames.Add("OnlineSubsystemBrainCloud");
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
>>>>>>> origin/develop:RelayTestAppCPP/Source/RelayTestAppCPP/RelayTestAppCPP.Build.cs
