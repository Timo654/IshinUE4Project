#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActUltimateAtk.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActUltimateAtk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 success_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 failure_frame;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActUltimateAtk();
};

