#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_LimbSolver.generated.h"

class ADevil2Human;
class ULimbSolver;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_LimbSolver : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULimbSolver* LimbSolver;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_OwnerActorHuman;
    
public:
    FAnimNode_LimbSolver();
};

