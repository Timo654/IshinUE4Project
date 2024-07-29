#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HumanCaption.h"
#include "DiEventParams_PlayFrame.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_PlayFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> play_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiEventParams_HumanCaption> human_captions;
    
    LIKEADRAGONISHIN_API FDiEventParams_PlayFrame();
};

