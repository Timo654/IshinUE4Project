#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilEditor.generated.h"

class UCanvas;
class UObject;

UCLASS(Blueprintable)
class EDITORUTILS_API UUtilEditor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilEditor();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldToViewportPos(const UObject* WorldContextObject, const FVector& Location, FVector2D& ViewPortPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpDateEditingViewportCamera(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSimulateInEditorViewport();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetViewportAspectDiffOffset(float DisplayAreaRatio);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetGameViewportSize();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetGameResolution();
    
    UFUNCTION(BlueprintCallable)
    static void GetEditorViewProjectionMatrix(FMatrix& ViewProjectionMatrix);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetEditorPIEViewportSize();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetEditorActiveViewportSize();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawStrings(const UObject* WorldContextObject, const FVector& Location, UCanvas* Canvas, TArray<FString>& Strings, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawString(const UObject* WorldContextObject, const FVector& Location, UCanvas* Canvas, FString& string, FLinearColor Color);
    
};

