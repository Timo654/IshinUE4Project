#pragma once
#include "CoreMinimal.h"
#include "EDamageStatusType.h"
#include "DamageTypeInfoPiece.generated.h"

USTRUCT(BlueprintType)
struct FDamageTypeInfoPiece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageStatusType StatusNum;
    
    LIKEADRAGONISHIN_API FDamageTypeInfoPiece();
};

