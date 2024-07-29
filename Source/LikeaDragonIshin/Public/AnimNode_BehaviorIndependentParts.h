#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BehaviorParts.h"
#include "AnimNode_BehaviorIndependentParts.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_BehaviorIndependentParts : public FAnimNode_BehaviorParts {
    GENERATED_BODY()
public:
    FAnimNode_BehaviorIndependentParts();
};

