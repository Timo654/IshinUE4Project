#pragma once
#include "CoreMinimal.h"
#include "EUIZOrderType.h"
#include "UIZOrderPresetAssetDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FUIZOrderPresetAssetDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIZOrderType ZOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    LIKEADRAGONISHIN_API FUIZOrderPresetAssetDataRecord();
};

