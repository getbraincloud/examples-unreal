#!/bin/bash

# USAGE:
#   ./autobuild/build-all.sh
#   ./autobuild/build-all.sh "/Users/<myusername>/Library/CloudStorage/GoogleDrive-<myuseremail>/Shared drives/<BuildFolder>"
#   ./autobuild/build-all.sh NewBuildFolder

export archive=${1}
if [ -z "${1}" ];
then
  export archive="."
  else
    export archive=${1}
fi

if [ -d "$archive" ];
then
  echo Writing ZIP files to $archive
  else
    echo Creating folder for ZIP files at $archive
    mkdir "$archive"
fi

for i in BCFPS MobileTestApp BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
  export target=Mac
	export proj=$i
	autobuild/makebuild.sh ${proj} ${target}
	if [ -d ${proj}_Unreal_${target}Build ];
	then
    cd artifacts
  	cp ../../../data/quarantine.command ${proj}_Unreal_${target}Build
	  zip -r ${proj}_Unreal_${target}Build.zip ${proj}_Unreal_${target}Build
  	cd ..
  	mv ${proj}_Unreal_${target}Build.zip "$archive"
	fi
done

for i in MobileTestApp BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
  export target=Android
	export proj=$i
	autobuild/makebuild.sh ${proj} ${target}
	if [ -d ${proj}_Unreal_${target}Build ];
	then
    cd artifacts
  	cp ../../../data/quarantine.command ${proj}_Unreal_${target}Build
	  zip -r ${proj}_Unreal_${target}Build.zip ${proj}_Unreal_${target}Build
  	cd ..
  	mv ${proj}_Unreal_${target}Build.zip "$archive"
	fi
done

for i in MobileTestApp BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
	export proj=$i
  export target=IOS
	autobuild/makebuild.sh ${proj} ${target}
	if [ -d ${proj}_Unreal_${target}Build ];
	then
    cd artifacts
  	cp ../../../data/quarantine.command ${proj}_Unreal_${target}Build
	  zip -r ${proj}_Unreal_${target}Build.zip ${proj}_Unreal_${target}Build
  	cd ..
  	mv ${proj}_Unreal_${target}Build.zip "$archive"
	fi
done
