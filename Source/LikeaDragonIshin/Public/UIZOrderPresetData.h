#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIZOrderPresetData.generated.h"

USTRUCT(BlueprintType)
struct FUIZOrderPresetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    LIKEADRAGONISHIN_API FUIZOrderPresetData();
};

