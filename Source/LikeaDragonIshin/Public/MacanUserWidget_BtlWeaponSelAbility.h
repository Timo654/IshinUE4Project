#pragma once
#include "CoreMinimal.h"
#include "EItemAbilityRarity.h"
#include "EItemAbilityType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlWeaponSelAbility.generated.h"

class UImage;
class UMacanImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlWeaponSelAbility : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBukiAbility_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* elem_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanImage* elem_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* defaultMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* emptyBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* emptyKakuBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* uniqueBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* uniqueKakuBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemAbilityRarity, UTexture2D*> rarityBaseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemAbilityRarity, UTexture2D*> rarityBaseMap_Kaku;
    
    UMacanUserWidget_BtlWeaponSelAbility();

    UFUNCTION(BlueprintCallable)
    void setMarkInfo(EItemAbilityType mark, EItemAbilityRarity rarity, bool isKaku, bool isUnique, bool isAync);
    
    UFUNCTION(BlueprintCallable)
    void resetMark();
    
};

