#!/bin/bash

export archive=${1:-.}

rm -rf artifacts/*

for i in BCFPS MobileTestApp BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
  export target=Mac
	export proj=$i
	autobuild/makebuild.sh ${proj} ${target}
	cd artifacts
	if [ -d ${proj}_Unreal_${target}Build ];
	then
  	cp ../../../data/quarantine.command ${proj}_Unreal_${target}Build
	  zip -r $archive/${proj}_Unreal_MacBuild.zip ${proj}_Unreal_${target}Build
	fi
	cd ..
done

for i in MobileTestApp BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
  export target=Android
	export proj=$i
	autobuild/makebuild.sh ${proj} ${target}
	cd artifacts
	if [ -d ${proj}_Unreal_${target}Build ];
	then
  	cp ../../../data/quarantine.command ${proj}_Unreal_${target}Build
	  zip -r $archive/${proj}_Unreal_MacBuild.zip ${proj}_Unreal_${target}Build
	fi
	cd ..
done


for i in MobileTestApp BCChat RelayTestApp
do
	export proj=$i
  export target=IOS
	autobuild/makebuild.sh ${proj} ${target}
	cd artifacts
	if [ -d ${proj}_Unreal_${target}Build ];
	then
  	cp ../../../data/quarantine.command ${proj}_Unreal_${target}Build
	  zip -r $archive/${proj}_Unreal_MacBuild.zip ${proj}_Unreal_${target}Build
	fi
	cd ..	
done
