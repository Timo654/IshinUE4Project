#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_Jaunt.generated.h"

class UJaunt;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_Jaunt : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJaunt* Jaunt;
    
    FAnimNode_Jaunt();
};

