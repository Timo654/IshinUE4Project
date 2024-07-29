#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimInstanceProxy_HybridPlayer.generated.h"

class ADevil2Human;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimInstanceProxy_HybridPlayer : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_OwnerActorHuman;
    
public:
    FAnimInstanceProxy_HybridPlayer();
};

