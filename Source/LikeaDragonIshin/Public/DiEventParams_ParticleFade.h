#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_ParticleFade.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_ParticleFade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _nearFadeSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _nearFadeEnd;
    
    LIKEADRAGONISHIN_API FDiEventParams_ParticleFade();
};

