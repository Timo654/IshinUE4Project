#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_CoreGauge.generated.h"

class UCanvasPanelSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_CoreGauge : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* target_slot;
    
    UMacanUserWidget_CoreGauge();

    UFUNCTION(BlueprintCallable)
    void SetProgress(float Val);
    
};

