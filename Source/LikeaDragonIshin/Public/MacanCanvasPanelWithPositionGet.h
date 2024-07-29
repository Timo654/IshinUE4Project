#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/CanvasPanel.h"
#include "MacanCanvasPanelWithPositionGet.generated.h"

UCLASS(Blueprintable)
class UMacanCanvasPanelWithPositionGet : public UCanvasPanel {
    GENERATED_BODY()
public:
    UMacanCanvasPanelWithPositionGet();

    UFUNCTION(BlueprintCallable)
    bool is_Hover(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable)
    FVector2D getViewportPos();
    
    UFUNCTION(BlueprintCallable)
    FVector2D getResolution();
    
};

