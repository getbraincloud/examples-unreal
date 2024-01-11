#!/bin/bash

for i in BCFPS MobileTestApp BCChat RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
    if [ -d "$i" ]; then
        cd "$i"
        "`dirname "$0"`"/cleanupunreal.sh
        cd ..
    fi
done
