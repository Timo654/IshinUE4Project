#pragma once
#include "CoreMinimal.h"
#include "EEquipRank.h"
#include "MacanUserWidget_SimpleIconTexture.h"
#include "MacanUserWidget_BtlWeaponRankIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlWeaponRankIcon : public UMacanUserWidget_SimpleIconTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipRank, UTexture2D*> rank_tex_map;
    
    UMacanUserWidget_BtlWeaponRankIcon();

    UFUNCTION(BlueprintCallable)
    void SetRank(EEquipRank rank);
    
};

