// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RelayTestAppCPP : ModuleRules
{
	public RelayTestAppCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "BCClientPlugin", "OnlineSubsystem", "OnlineSubsystemUtils", "Sockets", "SlateCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Json", "OnlineSubsystem" });
	}
}
