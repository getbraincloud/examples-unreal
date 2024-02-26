#!/bin/bash

for i in BCFPS MobileTestApp MobileTestAppUE4 BCChat RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
    if [ -d "$i" ]; then
        "`dirname "$0"`"/cleanupunreal.sh "$i"
    fi
done
