#pragma once
#include "CoreMinimal.h"
#include "EBtlStyle.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlWeaponSel.generated.h"

class UMacanUserWidget_BtlWeaponSelBase;
class UMacanUserWidget_BtlWeaponZetsugiSPBulletInfo;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlWeaponSel : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponSelBase* sel_Weapon1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponSelBase* sel_Weapon2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponSelBase* sel_Bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* BulletSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponZetsugiSPBulletInfo* BulletInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerLength;
    
public:
    UMacanUserWidget_BtlWeaponSel();

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void setZetsugiUseSPBullet(bool useSPBullet);
    
    UFUNCTION(BlueprintCallable)
    void setZetsugiAim(bool isInZetsugiAim);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(EBtlStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isChanging() const;
    
};

