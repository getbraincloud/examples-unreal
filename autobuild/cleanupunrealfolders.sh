#!/bin/bash

for i in BCFPS MobileTestApp BCChat RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
    if [ -d "$i" ]; then
        cd "$i"
        ../autobuild/cleanupunreal.sh
        cd ..
    fi
done
