#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_Behavior.h"
#include "AnimNode_BehaviorParts.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_BehaviorParts : public FAnimNode_Behavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
    FAnimNode_BehaviorParts();
};

