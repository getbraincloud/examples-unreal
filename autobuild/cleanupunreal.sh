#!/bin/bash
rm -rf $1/Binaries
rm -rf $1/Intermediate
rm -rf $1/Saved
rm -rf $1/DerivedDataCache
rm -rf $1/Plugins/BCClient/Binaries
rm -rf $1/Plugins/BCClient/Intermediate

echo Done $1
