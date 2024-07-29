#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EPadButton.h"
#include "EUIAnimType.h"
#include "EUIResultUpDownStay.h"
#include "EUIResultYesOrNo.h"
#include "EUIResultZeroOrOther.h"
#include "EUIState.h"
#include "UIBlueprintFunctionLibrary.generated.h"

class UMacanUserWidget;
class UTexture2D;

UCLASS(Blueprintable)
class UUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UIFuncZeroBranch(int32 Target, EUIResultZeroOrOther& result);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncSafeDecrementAndZeroCheck(UPARAM(Ref) int32& Target, EUIResultZeroOrOther& result);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncRefCountUIStatePressedAndAnimPlaying(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncRefCountUIStateOpenType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncRefCountUIStateCloseType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncRefCountUIState(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, EUIState inUIState, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncRefCountUIAnimType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, EUIAnimType inAnimType, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncNowLanguageJapanease(EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncNowLanguageEnglish(EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncNowFIGS(EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncNowEFIGS(EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncMouseTouchInputEvent(EPadButton btn);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D UIFuncLerpVector2D(const FVector2D& vectorA, const FVector2D& vectorB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    static FName UIFuncKeyGetFName(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> UIFuncKeyDisplayFNameToSoftTexturePtr(const FName& InName);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncIsShouldDisableInvalidationBoxCache();
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncIsEnableMouseEvent();
    
    UFUNCTION(BlueprintCallable)
    static FString UIFuncGetSourceStringFromFText(const FText& text);
    
    UFUNCTION(BlueprintCallable)
    static FString UIFuncGetAppVersionFString();
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> UIFuncFStringToSoftTexturePtr(const FString& InStr);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncCountUIStatePressedAndAnimPlaying(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncCountUIStateOpenType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncCountUIStateCloseType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncCountUIState(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, EUIState inUIState, bool isChildALL);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncCalcTileViewScrollOffset(EUIResultUpDownStay& result, int32 numOf1Line, int32 dispLines, int32 newIndex, UPARAM(Ref) int32& goalGroup, UPARAM(Ref) float& goalScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncAreReturnCodeInclude(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatString(FText text, TMap<FString, FString> Params);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatInt(FText text, TMap<FString, int32> Params);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatFloat(FText text, TMap<FString, float> Params);
    
};

