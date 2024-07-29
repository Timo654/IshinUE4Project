#pragma once
#include "CoreMinimal.h"
#include "EStageRangeType.h"
#include "StageRangeData.generated.h"

USTRUCT(BlueprintType)
struct FStageRangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageRangeType RangeType;
    
    LIKEADRAGONISHIN_API FStageRangeData();
};

