#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_WaistTwist.generated.h"

class UWaistTwist;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_WaistTwist : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaistTwist* WaistTwist;
    
    FAnimNode_WaistTwist();
};

