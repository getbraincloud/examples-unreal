#!/bin/bash
mydir=$1
if [ -z $mydir ]; then
  mydir=$PWD
fi

rm -rf $mydir/Binaries
rm -rf $mydir/Intermediate
rm -rf $mydir/Saved
rm -rf $mydir/DerivedDataCache
rm -rf $mydir/Plugins/BCClient/Binaries
rm -rf $mydir/Plugins/BCClient/Intermediate
rm -rf $mydir/Build/*/FileOpenOrder
rm -rf $mydir/Build/Android*/src
rm -rf $mydir/Build/Android*/project.properties
rm -rf $mydir/Build/IOS/UBTGenerated
rm -rf $mydir/Build/Mac/Resources
rm -rf $mydir/Build/Mac/*.PackageVersionCounter

echo Removed build files for $mydir

#rm -rf artifacts/$1_*
#echo Removed artifacts for $1