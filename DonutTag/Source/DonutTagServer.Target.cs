{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red38\green38\blue38;\red246\green246\blue246;}
{\*\expandedcolortbl;;\cssrgb\c20000\c20000\c20000;\cssrgb\c97255\c97255\c97255;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 using UnrealBuildTool;\cb1 \
\cb3 using System.Collections.Generic;\cb1 \
\
\cb3 [SupportedPlatforms(UnrealPlatformClass.Server)]\cb1 \
\cb3 public class DonutTagServerTarget : TargetRules\cb1 \
\cb3 \{\cb1 \
\cb3 \'a0 \'a0 public DonutTagServerTarget(TargetInfo Target) : base(Target)\cb1 \
\cb3 \'a0 \'a0 \{\cb1 \
\cb3 \'a0 \'a0 \'a0 \'a0 Type = TargetType.Server;\cb1 \
\cb3 \'a0 \'a0 \'a0 \'a0 DefaultBuildSettings = BuildSettingsVersion.V2;\cb1 \
\cb3 \'a0 \'a0 \'a0 \'a0 ExtraModuleNames.Add("RoomServerTest");\cb1 \
\cb3 \'a0 \'a0 \}\cb1 \
\cb3 \}\
}