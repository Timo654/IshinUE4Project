#pragma once
#include "CoreMinimal.h"
#include "LifeGaugeRatio.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlMainLife.generated.h"

class UCanvasPanel;
class UMacanUserWidget_BtlHact;
class UMacanUserWidget_BtlMainLifeBonus;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlMainLife : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* gauge_Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* gauge_TaishiAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* gauge_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* gauge_Now;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* gauge_divider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* gauge_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlMainLifeBonus* elem_bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHact* elem_hact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* gauge_Heal2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifeGaugeSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifeGaugeSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifeGaugeSizeOffset_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifeGaugeSizeOffset_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gauge_Decrease_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gauge_Decrease_Speed;
    
public:
    UMacanUserWidget_BtlMainLife();

    UFUNCTION(BlueprintCallable)
    void updateHPPercent();
    
    UFUNCTION(BlueprintCallable)
    void setLogicalHPMax(int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLifeGaugeRatio(const FLifeGaugeRatio& ratio);
    
    UFUNCTION(BlueprintCallable)
    void setHPMAX(int32 Base, int32 bonus);
    
    UFUNCTION(BlueprintCallable)
    void setHPBarMode(bool _isEditMode, bool isExtend);
    
    UFUNCTION(BlueprintCallable)
    void setHP(int32 _nowHP);
    
    UFUNCTION(BlueprintCallable)
    void setHeal(int32 _nowHeal);
    
    UFUNCTION(BlueprintCallable)
    void on(bool LifeOnly);
    
    UFUNCTION(BlueprintCallable)
    void off(bool LifeOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isVisibleEditLife() const;
    
    UFUNCTION(BlueprintCallable)
    void HactOn();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHactImmidiateWithoutPerform(float _hact, float Max);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHact(float _hact, float Max);
    
};

