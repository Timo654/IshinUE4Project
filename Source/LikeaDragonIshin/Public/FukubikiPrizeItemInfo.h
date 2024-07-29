#pragma once
#include "CoreMinimal.h"
#include "FukubikiPrizeItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FFukubikiPrizeItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    LIKEADRAGONISHIN_API FFukubikiPrizeItemInfo();
};

