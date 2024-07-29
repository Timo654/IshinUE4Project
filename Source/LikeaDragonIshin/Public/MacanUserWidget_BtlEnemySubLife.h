#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlEnemySubLife.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_BtlEnemyLifeGauge;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlEnemySubLife : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_damage_guard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlEnemyLifeGauge* gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_armor_on;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_armor_off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_armor_break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlEnemyLifeGauge* armor_gauge;
    
    UMacanUserWidget_BtlEnemySubLife();

    UFUNCTION(BlueprintCallable)
    void setWarn(bool _isWarn);
    
    UFUNCTION(BlueprintCallable)
    void setupArmor(bool hasArmor);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FText& Name);
    
    UFUNCTION(BlueprintCallable)
    void setHP(float Value, float diff);
    
    UFUNCTION(BlueprintCallable)
    void setArmor(float Value, float diff);
    
    UFUNCTION(BlueprintCallable)
    void onDamage(bool isGuard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isGaugeBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDeadEnd() const;
    
};

