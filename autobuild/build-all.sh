#!/bin/bash
# SETUP:
#   Export $WORKSPACE and $UE_INSTALL_PATH
# USAGE:
#   ./autobuild/build-all.sh
#   ./autobuild/build-all.sh "/Users/<myusername>/Library/CloudStorage/GoogleDrive-<myuseremail>/My Drive/<BuildFolder>"
#   ./autobuild/build-all.sh NewBuildFolder


export archive=${1}

if [ ! -d "$archive" ];
then
    mkdir "$archive"
fi

for j in Mac Android IOS
#for j in Mac
do
  export target=$j
  #for i in BCFPS MobileTestApp BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
  for i in TappyChicken
  do
    export proj=$i
    autobuild/makebuild.sh ${proj} ${target}
    if [ -d artifacts/${proj}_Unreal_${target}Build ];
    then
      cd artifacts
      if [ $target == Mac ];
      then
        cp ${BRAINCLOUD_TOOLS}/data/quarantine.command ${proj}_Unreal_${target}Build
      fi
      zip -r ${proj}_Unreal_${target}Build.zip ${proj}_Unreal_${target}Build
      cd ..
      if [ ! -n "$archive" ];
      then
        mv artifacts/${proj}_Unreal_${target}Build.zip "$archive"
      fi
    fi
  done
done