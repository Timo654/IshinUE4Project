#pragma once
#include "CoreMinimal.h"
#include "ParticleOpacityInfo.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FParticleOpacityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    FParticleOpacityInfo();
};

