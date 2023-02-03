#!/bin/bash


case "$1" in
    devices)
        $ANDROID_SDK/emulator/emulator -list-avds
        ;;
    boot)
        $ANDROID_SDK/emulator/emulator -avd $2
        ;;
    start)
        $ANDROID_SDK/platform-tools/adb shell am start -n com.bitheads.$2/com.epicgames.unreal.SplashActivity
        ;;
    stop)
        $ANDROID_SDK/platform-tools/adb shell am force-stop com.bitheads.$2
        ;;
    install)
        $ANDROID_SDK/platform-tools/adb install -t Exports/$2/Android/$2-arm64.apk 
        ;;
    info)
        $ANDROID_SDK/platform-tools/adb shell pm list packages -U -3
        $ANDROID_SDK/platform-tools/adb shell dumpsys package | grep -Eo "^[[:space:]]+[0-9a-f]+[[:space:]]+com.bitheads.RelayTestApp/[^[:space:]]+" | grep -oE "[^[:space:]]+$"
        ;;
    uninstall)
        $ANDROID_SDK/platform-tools/adb uninstall com.bitheads.$2
        ;;
    clear)
        $ANDROID_SDK/platform-tools/adb shell pm clear com.bitheads.$2
        ;;
      log)
        $ANDROID_SDK/platform-tools/adb logcat -c
        $ANDROID_SDK/platform-tools/adb logcat     
        ;;
    *)
        echo $"Usage: $0 {start|stop|install|uninstall|clear|devices}"
        exit 1
 
esac
exit 0

