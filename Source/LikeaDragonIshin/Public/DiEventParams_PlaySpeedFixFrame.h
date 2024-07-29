#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_PlaySpeedFixFrame.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_PlaySpeedFixFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame_num;
    
    LIKEADRAGONISHIN_API FDiEventParams_PlaySpeedFixFrame();
};

