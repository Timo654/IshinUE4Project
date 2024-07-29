#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_PlayFrameTbl.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_PlayFrameTbl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> play_frame;
    
    LIKEADRAGONISHIN_API FDiEventParams_PlayFrameTbl();
};

