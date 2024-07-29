#pragma once
#include "CoreMinimal.h"
#include "UIItemItemData.h"
#include "UIItemItemDataArray.generated.h"

USTRUCT(BlueprintType)
struct FUIItemItemDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIItemItemData> ary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numOfColumn;
    
    LIKEADRAGONISHIN_API FUIItemItemDataArray();
};

