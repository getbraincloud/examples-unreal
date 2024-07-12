// Fill out your copyright notice in the Description page of Project Settings.


#include "SplatterAnimationLibrary.h"


float USplatterAnimationLibrary::SplatSizeOverTime(float t, float a, float b) 
{
	float grow = (1 + b) * t / a;
	float shrink = -(((1 + b) * t) - ((2 + b) * a)) / a;
	return std::min(grow, shrink);
}

float USplatterAnimationLibrary::SplatOpacityOverTime(float t, float a) 
{
	return std::max(t / a, 0.25f);
}

float USplatterAnimationLibrary::FadeOpacityOverTime(float t, float a)
{
	return 1 - pow(t / a, 2);
}