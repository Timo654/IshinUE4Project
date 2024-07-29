#pragma once
#include "CoreMinimal.h"
#include "SeIdParam.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FSeIdParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VoicerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundCueStr;
    
    LIKEADRAGONISHIN_API FSeIdParam();
};

