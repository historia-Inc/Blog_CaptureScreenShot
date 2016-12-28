// Fill out your copyright notice in the Description page of Project Settings.

#include "CaptureScreenShotPrivatePCH.h"
#include "CaptureScreenshotFunctionLibrary.h"



void UCaptureScreenshotFunctionLibrary::CaptureScreenshotWithHUD(const FString & InFilename, bool bInShowUI)
{
	FScreenshotRequest SR = FScreenshotRequest();
	FString savelocation = FPaths::ConvertRelativePathToFull(FPaths::GameDir());

	FString filename = savelocation + FString(TEXT("/Saved/Screenshots/")) + InFilename + FString(TEXT(".png"));

	SR.RequestScreenshot(filename, bInShowUI, false);
}
