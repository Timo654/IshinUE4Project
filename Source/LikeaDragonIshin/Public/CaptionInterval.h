#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CaptionInterval.generated.h"

USTRUCT(BlueprintType)
struct FCaptionInterval : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    LIKEADRAGONISHIN_API FCaptionInterval();
};

