#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_LookTarget.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_LookTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_id;
    
    LIKEADRAGONISHIN_API FDiEventParams_LookTarget();
};

