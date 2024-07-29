#pragma once
#include "CoreMinimal.h"
#include "FaceTargetAnimWeight.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FFaceTargetAnimWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Weights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> is_direct;
    
    FFaceTargetAnimWeight();
};

