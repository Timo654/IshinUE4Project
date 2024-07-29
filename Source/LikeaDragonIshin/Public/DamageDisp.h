#pragma once
#include "CoreMinimal.h"
#include "DamageDispImpl.h"
#include "DamageDisp.generated.h"

USTRUCT(BlueprintType)
struct FDamageDisp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageDispImpl> damage_list;
    
    LIKEADRAGONISHIN_API FDamageDisp();
};

