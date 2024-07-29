#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_SequenceEvaluator.h"
#include "AnimNode_MontageEvaluator.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_MontageEvaluator : public FAnimNode_SequenceEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_;
    
    FAnimNode_MontageEvaluator();
};

