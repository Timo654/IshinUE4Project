#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Timer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Timer : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Timer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimeEvent(int32 Min, int32 sec, int32 msec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWarningEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEvent(EUIState State);
    
};

