// Fill out your copyright notice in the Description page of Project Settings.


#include "BCChatUtilities.h"

FDateTime UBCChatUtilities::UTCToDateTime(int64 utcMSeconds)
{
	return FDateTime::FromUnixTimestamp(utcMSeconds / 1000);
}
