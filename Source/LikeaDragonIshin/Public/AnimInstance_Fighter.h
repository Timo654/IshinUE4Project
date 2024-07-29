#pragma once
#include "CoreMinimal.h"
#include "AnimInstance_Human.h"
#include "AnimInstance_Fighter.generated.h"

class ADevil2Human;

UCLASS(Abstract, Blueprintable, NonTransient)
class LIKEADRAGONISHIN_API UAnimInstance_Fighter : public UAnimInstance_Human {
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
    
public:
    UAnimInstance_Fighter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADevil2Human* GetOwnerFighter() const;
    
};

