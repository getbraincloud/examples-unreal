// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RelayTestAppEditorTarget : TargetRules
{
	public RelayTestAppEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "RelayTestApp" } );

        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            // use this compiler flag for Xcode 14 (Apple clang version 14.0.0)
            // commandline option to avoid errors in Unreal source
            // not available in Xcode 13.2 or less (Apple clang version 13.0.0)
            bOverrideBuildEnvironment = true;
            AdditionalCompilerArguments = "-Wno-unused-but-set-variable -Wno-bitwise-instead-of-logical";
        }
      }
}
