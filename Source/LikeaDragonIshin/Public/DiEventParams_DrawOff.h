#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_DrawOff.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_DrawOff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_DrawOff();
};

