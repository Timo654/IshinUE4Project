#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlEnemyLifeGauge.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlEnemyLifeGauge : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GaugeCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GaugeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimWarn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimDead;
    
    UMacanUserWidget_BtlEnemyLifeGauge();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWarn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDead();
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetDelta(float Delta);
    
};

