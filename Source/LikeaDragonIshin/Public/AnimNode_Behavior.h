#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_Behavior.generated.h"

class ADevil2Human;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimNode_Behavior : public FAnimNode_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_OwnerActorHuman;
    
public:
    FAnimNode_Behavior();
};

