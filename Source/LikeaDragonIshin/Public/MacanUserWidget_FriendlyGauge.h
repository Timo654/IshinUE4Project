#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_FriendlyGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_FriendlyGauge : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_FriendlyGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGaugeEvent(float Frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetPatternEvent(float Pattern);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUpEvent();
    
    UFUNCTION(BlueprintCallable)
    void MacanUpdateComponnet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEvent(EUIState State);
    
    UFUNCTION(BlueprintCallable)
    void EndIsPlayUp();
    
};

