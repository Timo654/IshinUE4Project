#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_CutPoint.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_CutPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> cut_points;
    
    LIKEADRAGONISHIN_API FDiEventParams_CutPoint();
};

