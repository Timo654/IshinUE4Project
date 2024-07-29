#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActFinish.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActFinish {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActFinish();
};

