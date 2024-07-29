#include "UtilEditor.h"

UUtilEditor::UUtilEditor() {
}

bool UUtilEditor::WorldToViewportPos(const UObject* WorldContextObject, const FVector& Location, FVector2D& ViewPortPos) {
    return false;
}

void UUtilEditor::UpDateEditingViewportCamera(const UObject* WorldContextObject) {
}

bool UUtilEditor::IsSimulateInEditorViewport() {
    return false;
}

FVector2D UUtilEditor::GetViewportAspectDiffOffset(float DisplayAreaRatio) {
    return FVector2D{};
}

FVector2D UUtilEditor::GetGameViewportSize() {
    return FVector2D{};
}

FVector2D UUtilEditor::GetGameResolution() {
    return FVector2D{};
}

void UUtilEditor::GetEditorViewProjectionMatrix(FMatrix& ViewProjectionMatrix) {
}

FVector2D UUtilEditor::GetEditorPIEViewportSize() {
    return FVector2D{};
}

FVector2D UUtilEditor::GetEditorActiveViewportSize() {
    return FVector2D{};
}

void UUtilEditor::DebugDrawStrings(const UObject* WorldContextObject, const FVector& Location, UCanvas* Canvas, TArray<FString>& Strings, FLinearColor Color) {
}

void UUtilEditor::DebugDrawString(const UObject* WorldContextObject, const FVector& Location, UCanvas* Canvas, FString& string, FLinearColor Color) {
}


