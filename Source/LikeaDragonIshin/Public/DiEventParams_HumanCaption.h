#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HumanCaption.generated.h"

class ULevelSequence;
class UTexture2D;

USTRUCT(BlueprintType)
struct FDiEventParams_HumanCaption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSoundFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSoundFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptionTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool disp_right;
    
    LIKEADRAGONISHIN_API FDiEventParams_HumanCaption();
};

