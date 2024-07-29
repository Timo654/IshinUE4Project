#pragma once
#include "CoreMinimal.h"
#include "UIOptionItemData.h"
#include "UIOptionItemDataArray.generated.h"

USTRUCT(BlueprintType)
struct FUIOptionItemDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIOptionItemData> ary;
    
    LIKEADRAGONISHIN_API FUIOptionItemDataArray();
};

