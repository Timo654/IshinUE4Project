#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataCmnLife.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataCmnLife : public UMacanUIData {
    GENERATED_BODY()
public:
    UMacanUIDataCmnLife();

    UFUNCTION(BlueprintCallable)
    void setNowHP(int32 nowHP);
    
    UFUNCTION(BlueprintCallable)
    void setMaxHP(int32 maxHP, int32 bonusHP);
    
    UFUNCTION(BlueprintCallable)
    void setLogicalHPMax(int32 HP_max);
    
    UFUNCTION(BlueprintCallable)
    void setHPBarMode(bool _isEditMode, bool isExtend);
    
    UFUNCTION(BlueprintCallable)
    void setHEAT(float in_power, float Max);
    
};

