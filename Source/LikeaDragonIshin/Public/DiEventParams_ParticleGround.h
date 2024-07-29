#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_ParticleGround.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_ParticleGround {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _scale;
    
    LIKEADRAGONISHIN_API FDiEventParams_ParticleGround();
};

