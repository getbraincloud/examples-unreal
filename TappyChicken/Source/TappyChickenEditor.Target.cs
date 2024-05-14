// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class TappyChickenEditorTarget : TargetRules
{
	public TappyChickenEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
	    bOverrideBuildEnvironment = true;
        ExtraModuleNames.AddRange( new string[] { "TappyChicken" } );
	}
}
