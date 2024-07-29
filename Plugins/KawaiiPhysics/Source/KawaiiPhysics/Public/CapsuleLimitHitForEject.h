#pragma once
#include "CoreMinimal.h"
#include "CollisionLimitBase.h"
#include "CapsuleLimitHitForEject.generated.h"

USTRUCT(BlueprintType)
struct FCapsuleLimitHitForEject : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    KAWAIIPHYSICS_API FCapsuleLimitHitForEject();
};

