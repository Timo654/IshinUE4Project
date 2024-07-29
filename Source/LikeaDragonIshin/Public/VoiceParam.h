#pragma once
#include "CoreMinimal.h"
#include "VoiceIDList.h"
#include "VoiceParam.generated.h"

USTRUCT(BlueprintType)
struct FVoiceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceIDList VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VoicerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceIDStr;
    
    LIKEADRAGONISHIN_API FVoiceParam();
};

