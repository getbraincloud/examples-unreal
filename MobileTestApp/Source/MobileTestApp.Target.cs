// Copyright 2026 bitHeads, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MobileTestAppTarget : TargetRules
{
	public MobileTestAppTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "MobileTestApp" } );
	}
}
