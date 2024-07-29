#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_PlaySpeed.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_PlaySpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed_min;
    
    LIKEADRAGONISHIN_API FDiEventParams_PlaySpeed();
};

