// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class TappyChickenTarget : TargetRules
{
	public TappyChickenTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
	    bOverrideBuildEnvironment = true;
		ExtraModuleNames.AddRange( new string[] { "TappyChicken" } );
	}
}
