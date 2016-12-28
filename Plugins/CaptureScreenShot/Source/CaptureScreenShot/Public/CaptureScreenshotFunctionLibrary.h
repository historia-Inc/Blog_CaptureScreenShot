// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CaptureScreenshotFunctionLibrary.generated.h"

UCLASS()
class CAPTURESCREENSHOT_API UCaptureScreenshotFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 HUD込みで、スクリーンショットをとります。
	 @param InFilename     画像の保存名を記入します。
	 @param bInShowUI      HUD込み機能オン/オフをチェックします。
	 */
	UFUNCTION(BlueprintCallable, Category = "ScreenShot")
	static void CaptureScreenshotWithHUD(const FString & InFilename=FString(TEXT("ImageName")), bool bInShowUI=true);

};
