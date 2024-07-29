#pragma once
#include "CoreMinimal.h"
#include "FaceTargetPatternOffsetWeight.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FFaceTargetPatternOffsetWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_anger_LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_pain_LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_sad_LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_sup_LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_open_LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_close_LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float eye_lip_LR;
    
    FFaceTargetPatternOffsetWeight();
};

