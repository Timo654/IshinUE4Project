#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_AppendBlend.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_AppendBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Base;
    
    LIKEADRAGONISHIN_API FAnimNode_AppendBlend();
};

