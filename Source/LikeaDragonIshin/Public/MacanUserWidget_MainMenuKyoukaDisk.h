#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MainMenuKyoukaDisk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidget_MainMenuKyoukaDisk : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MainMenuKyoukaDisk();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateZoomInOut(bool isZoomIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateOtherInOut(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateCursorUIState(EUIState newUIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateCursorPos(UPARAM(Ref) FVector2D& InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingAnimZoomInOutOrInOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCursorUIState(EUIState checkUIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetUnitPosArray(UPARAM(Ref) TArray<FVector2D>& outPosArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetUnitPos(int32 Index, UPARAM(Ref) FVector2D& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetCursorSize(UPARAM(Ref) FVector2D& outSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetCursorPosFromMousePos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetCanvasPanelSize(UPARAM(Ref) FVector2D& outSize);
    
};

