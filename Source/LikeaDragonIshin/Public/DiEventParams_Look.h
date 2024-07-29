#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_Look.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_Look {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_id;
    
    LIKEADRAGONISHIN_API FDiEventParams_Look();
};

