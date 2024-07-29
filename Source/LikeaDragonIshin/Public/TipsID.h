#pragma once
#include "CoreMinimal.h"
#include "TipsID.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FTipsID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    FTipsID();
};

