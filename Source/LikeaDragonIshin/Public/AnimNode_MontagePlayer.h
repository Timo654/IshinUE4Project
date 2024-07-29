#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "AnimNode_MontagePlayer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_MontagePlayer : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_;
    
    FAnimNode_MontagePlayer();
};

