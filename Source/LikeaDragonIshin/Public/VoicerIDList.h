#pragma once
#include "CoreMinimal.h"
#include "VoicerIDList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FVoicerIDList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Key;
    
    FVoicerIDList();
};

