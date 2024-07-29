#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DamageTypeInfo.h"
#include "EAttackDamageType.h"
#include "DaDamageTypeInfo.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDaDamageTypeInfo : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackDamageType, FDamageTypeInfo> m_InfoTable;
    
public:
    UDaDamageTypeInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDamageTypeInfo GetDamageTypeInfo(EAttackDamageType in_DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistsDamageTypeInfo(EAttackDamageType in_DamageType) const;
    
};

