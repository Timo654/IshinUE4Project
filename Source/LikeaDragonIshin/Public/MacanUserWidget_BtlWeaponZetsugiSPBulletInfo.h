#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlWeaponZetsugiSPBulletInfo.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlWeaponZetsugiSPBulletInfo : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* switcher;
    
    UMacanUserWidget_BtlWeaponZetsugiSPBulletInfo();

    UFUNCTION(BlueprintCallable)
    void setUseBullet(bool isUse);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isUseBullet() const;
    
};

