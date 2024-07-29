#pragma once
#include "CoreMinimal.h"
#include "FacePatternAnimWeight.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FFacePatternAnimWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Weights;
    
    FFacePatternAnimWeight();
};

