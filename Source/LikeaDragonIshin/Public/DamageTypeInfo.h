#pragma once
#include "CoreMinimal.h"
#include "DamageTypeInfoPiece.h"
#include "DamageTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct FDamageTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeInfoPiece> PieceList;
    
    LIKEADRAGONISHIN_API FDamageTypeInfo();
};

