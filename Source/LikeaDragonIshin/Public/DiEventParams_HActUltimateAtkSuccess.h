#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActUltimateAtkSuccess.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActUltimateAtkSuccess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActUltimateAtkSuccess();
};

