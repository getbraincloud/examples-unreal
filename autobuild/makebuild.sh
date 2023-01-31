#!/bin/bash
# usage:
#      autobuild/makebuild.sh project_name
# make sure to set the install path of your engine version
#       export UE_INSTALL_PATH='/Users/Shared/Epic Games/UE_5.1'

PROJECTNAME=${1}
WORKSPACE=$PWD


mkdir "$WORKSPACE/Binaries/"
mkdir "$WORKSPACE/Binaries/${PROJECTNAME}_MacOSBuild"

#"${UE_INSTALL_PATH}/Engine/Build/BatchFiles/Mac/GenerateProjectFiles.sh" -projectfiles -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -game  -progress 

"${UE_INSTALL_PATH}/Engine/Build/BatchFiles/Mac/Build.sh" ${PROJECTNAME}Editor Mac Development -Project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" 

"${UE_INSTALL_PATH}/Engine/Build/BatchFiles/RunUAT.sh" BuildCookRun -nocompileeditor -installed -nop4 -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -cook -stage -archive -archivedirectory="$WORKSPACE/MacOS_Build_${PROJECTNAME}" -package   -compressed -SkipCookingEditorContent -clientconfig=Development -clean -pak -prereqs -distribution -nodebuginfo -targetplatform=Mac -build -target=RelayTestApp -utf8output 
 
 #-ue4exe="/Users/Shared/Epic Games/UE_4.27/Engine/Binaries/Mac/UE4Editor.app/Contents/MacOS/UE4Editor"