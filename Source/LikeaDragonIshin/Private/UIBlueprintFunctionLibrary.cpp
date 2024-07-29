#include "UIBlueprintFunctionLibrary.h"

UUIBlueprintFunctionLibrary::UUIBlueprintFunctionLibrary() {
}

void UUIBlueprintFunctionLibrary::UIFuncZeroBranch(int32 Target, EUIResultZeroOrOther& result) {
}

bool UUIBlueprintFunctionLibrary::UIFuncSafeDecrementAndZeroCheck(int32& Target, EUIResultZeroOrOther& result) {
    return false;
}

int32 UUIBlueprintFunctionLibrary::UIFuncRefCountUIStatePressedAndAnimPlaying(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, int32& refCount, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncRefCountUIStateOpenType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, int32& refCount, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncRefCountUIStateCloseType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, int32& refCount, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncRefCountUIState(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, int32& refCount, EUIState inUIState, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncRefCountUIAnimType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, int32& refCount, EUIAnimType inAnimType, bool isChildALL) {
    return 0;
}

bool UUIBlueprintFunctionLibrary::UIFuncNowLanguageJapanease(EUIResultYesOrNo& result) {
    return false;
}

bool UUIBlueprintFunctionLibrary::UIFuncNowLanguageEnglish(EUIResultYesOrNo& result) {
    return false;
}

bool UUIBlueprintFunctionLibrary::UIFuncNowFIGS(EUIResultYesOrNo& result) {
    return false;
}

bool UUIBlueprintFunctionLibrary::UIFuncNowEFIGS(EUIResultYesOrNo& result) {
    return false;
}

bool UUIBlueprintFunctionLibrary::UIFuncMouseTouchInputEvent(EPadButton btn) {
    return false;
}

FVector2D UUIBlueprintFunctionLibrary::UIFuncLerpVector2D(const FVector2D& vectorA, const FVector2D& vectorB, float Alpha) {
    return FVector2D{};
}

FName UUIBlueprintFunctionLibrary::UIFuncKeyGetFName(const FKey& InKey) {
    return NAME_None;
}

TSoftObjectPtr<UTexture2D> UUIBlueprintFunctionLibrary::UIFuncKeyDisplayFNameToSoftTexturePtr(const FName& InName) {
    return NULL;
}

bool UUIBlueprintFunctionLibrary::UIFuncIsShouldDisableInvalidationBoxCache() {
    return false;
}

bool UUIBlueprintFunctionLibrary::UIFuncIsEnableMouseEvent() {
    return false;
}

FString UUIBlueprintFunctionLibrary::UIFuncGetSourceStringFromFText(const FText& text) {
    return TEXT("");
}

FString UUIBlueprintFunctionLibrary::UIFuncGetAppVersionFString() {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UUIBlueprintFunctionLibrary::UIFuncFStringToSoftTexturePtr(const FString& InStr) {
    return NULL;
}

int32 UUIBlueprintFunctionLibrary::UIFuncCountUIStatePressedAndAnimPlaying(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncCountUIStateOpenType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncCountUIStateCloseType(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, bool isChildALL) {
    return 0;
}

int32 UUIBlueprintFunctionLibrary::UIFuncCountUIState(const TArray<UMacanUserWidget*>& inArray, EUIResultZeroOrOther& result, EUIState inUIState, bool isChildALL) {
    return 0;
}

bool UUIBlueprintFunctionLibrary::UIFuncCalcTileViewScrollOffset(EUIResultUpDownStay& result, int32 numOf1Line, int32 dispLines, int32 newIndex, int32& goalGroup, float& goalScrollOffset) {
    return false;
}

bool UUIBlueprintFunctionLibrary::UIFuncAreReturnCodeInclude(const FString& inString) {
    return false;
}

FText UUIBlueprintFunctionLibrary::FormatString(FText text, TMap<FString, FString> Params) {
    return FText::GetEmpty();
}

FText UUIBlueprintFunctionLibrary::FormatInt(FText text, TMap<FString, int32> Params) {
    return FText::GetEmpty();
}

FText UUIBlueprintFunctionLibrary::FormatFloat(FText text, TMap<FString, float> Params) {
    return FText::GetEmpty();
}


