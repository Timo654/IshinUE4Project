#pragma once
#include "CoreMinimal.h"
#include "EDamageLevelType.h"
#include "EThrowHandType.h"
#include "ShootParam.generated.h"

USTRUCT(BlueprintType)
struct FShootParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThrowHandType HandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageLevelType Level;
    
    LIKEADRAGONISHIN_API FShootParam();
};

