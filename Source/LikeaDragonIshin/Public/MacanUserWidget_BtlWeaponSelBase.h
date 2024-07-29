#pragma once
#include "CoreMinimal.h"
#include "ItemAbilityDispData.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlWeaponSelBase.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_BtlWeaponIcon;
class UMacanUserWidget_BtlWeaponSelAbility;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlWeaponSelBase : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponIcon* icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_BtlWeaponSelAbility*> ability_slots;
    
    UMacanUserWidget_BtlWeaponSelBase();

    UFUNCTION(BlueprintCallable)
    void setSoftTexture(TSoftObjectPtr<UTexture2D> texPtr);
    
    UFUNCTION(BlueprintCallable)
    void SetNum(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FText& _name);
    
    UFUNCTION(BlueprintCallable)
    void setIcon(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable)
    void setAbilityList(const TArray<FItemAbilityDispData>& ability_list);
    
    UFUNCTION(BlueprintCallable)
    void hideNum();
    
};

