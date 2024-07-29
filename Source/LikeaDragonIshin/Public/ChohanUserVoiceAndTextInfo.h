#pragma once
#include "CoreMinimal.h"
#include "ChohanUserVoiceAndTextInfo.generated.h"

USTRUCT(BlueprintType)
struct FChohanUserVoiceAndTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText textMessage;
    
    LIKEADRAGONISHIN_API FChohanUserVoiceAndTextInfo();
};

