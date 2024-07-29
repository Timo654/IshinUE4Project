#pragma once
#include "CoreMinimal.h"
#include "ManageResourceBlendSpace.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FManageResourceBlendSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* pData;
    
    LIKEADRAGONISHIN_API FManageResourceBlendSpace();
};

