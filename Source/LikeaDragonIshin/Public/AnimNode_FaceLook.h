#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNodeFaceLookNodeInfo.h"
#include "AnimNode_FaceLook.generated.h"

class UFaceLook;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_FaceLook : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFaceLook* FaceLook;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimNodeFaceLookNodeInfo> m_nodes;
    
public:
    FAnimNode_FaceLook();
};

