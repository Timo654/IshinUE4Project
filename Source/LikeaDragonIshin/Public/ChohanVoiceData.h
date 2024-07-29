#pragma once
#include "CoreMinimal.h"
#include "ChohanVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FChohanVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_talk_str;
    
    LIKEADRAGONISHIN_API FChohanVoiceData();
};

