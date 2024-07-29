#pragma once
#include "CoreMinimal.h"
#include "CollisionLimitBase.h"
#include "CapsuleLimit.generated.h"

USTRUCT(BlueprintType)
struct FCapsuleLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchCondition;
    
    KAWAIIPHYSICS_API FCapsuleLimit();
};

