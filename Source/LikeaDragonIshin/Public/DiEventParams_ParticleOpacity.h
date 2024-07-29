#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_ParticleOpacity.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_ParticleOpacity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _ptcID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> anim;
    
    LIKEADRAGONISHIN_API FDiEventParams_ParticleOpacity();
};

