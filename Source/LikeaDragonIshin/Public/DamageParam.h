#pragma once
#include "CoreMinimal.h"
#include "EDamageNotifyCalcType.h"
#include "DamageParam.generated.h"

USTRUCT(BlueprintType)
struct FDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageNotifyCalcType CalcType;
    
    LIKEADRAGONISHIN_API FDamageParam();
};

