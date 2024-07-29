#pragma once
#include "CoreMinimal.h"
#include "VoiceIDList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FVoiceIDList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Key;
    
    FVoiceIDList();
};

