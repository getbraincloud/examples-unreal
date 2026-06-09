// Copyright 2026 bitHeads, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MobileTestAppEditorTarget : TargetRules
{
	public MobileTestAppEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "MobileTestApp" } );
	}
}
