#!/bin/bash

for i in BCChat RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp
do
    if [ -d "$i" ]; then
        cd "$i"
        "`dirname "$0"`"/cleanupunreal.sh
        cd ..
    fi
done
