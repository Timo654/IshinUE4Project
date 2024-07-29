#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_SubGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_SubGauge : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector worldPos;
    
    UMacanUserWidget_SubGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimeEvent(int32 Min, int32 sec, int32 msec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRecoveryRatioBP(float ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeRatioBP(float ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageRatioBP(float ratio);
    
    UFUNCTION(BlueprintCallable)
    void MacanUpdateComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEvent(EUIState State);
    
};

