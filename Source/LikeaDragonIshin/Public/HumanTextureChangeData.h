#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HumanTextureChangeData.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FHumanTextureChangeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cnt;
    
    FHumanTextureChangeData();
};

