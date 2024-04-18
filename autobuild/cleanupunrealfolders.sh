#!/bin/bash

for i in BCFPS MobileTestApp UE4TestApp BCChat RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp Groups TargetPractice
do
    if [ -d "$i" ]; then
        "`dirname "$0"`"/cleanupunreal.sh "$i"
    fi
done
