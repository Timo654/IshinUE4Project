#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlDamageType.h"
#include "DamageDispImpl.generated.h"

USTRUCT(BlueprintType)
struct FDamageDispImpl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlDamageType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    LIKEADRAGONISHIN_API FDamageDispImpl();
};

