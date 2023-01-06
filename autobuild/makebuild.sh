#!/bin/bash
# usage:
#      autobuild/makebuild.sh project_name

export PROJECTNAME=${1}
export WORKSPACE=$PWD

"/Users/Shared/Epic Games/UE_5.1/Engine/Build/BatchFiles/Mac/GenerateProjectFiles.sh" -projectfiles -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -game -rocket -progress 

"/Users/Shared/Epic Games/UE_5.1/Engine/Build/BatchFiles/Mac/Build.sh" $PROJECTNAME Mac Development -Project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -WaitMutex

"/Users/Shared/Epic Games/UE_5.1/Engine/Build/BatchFiles/RunUAT.sh" BuildCookRun -rocket -nocompile -compileeditor -installed -nop4 -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -cook -stage -archive -archivedirectory="$WORKSPACE/$PROJECTNAME_MACOS_Build" -package -clientconfig=Development -clean -pak -prereqs -distribution -nodebuginfo -targetplatform=Mac -build -utf8output 
