#pragma once
#include "CoreMinimal.h"
#include "AnimInstance_HumanMovement.h"
#include "AnimInstance_FighterMovement.generated.h"

class UAnimSequence;
class UBlendSpaceBase;

UCLASS(Abstract, Blueprintable, NonTransient)
class LIKEADRAGONISHIN_API UAnimInstance_FighterMovement : public UAnimInstance_HumanMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeverForce_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeverRelativeForward_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeverRelativeRight_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShift_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* MoveBlend_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* ShiftMove_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Stand_;
    
public:
    UAnimInstance_FighterMovement();

};

