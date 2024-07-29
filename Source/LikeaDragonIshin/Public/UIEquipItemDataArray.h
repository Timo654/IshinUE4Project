#pragma once
#include "CoreMinimal.h"
#include "UIEquipItemData.h"
#include "UIEquipItemDataArray.generated.h"

USTRUCT(BlueprintType)
struct FUIEquipItemDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEquipItemData> ary;
    
    LIKEADRAGONISHIN_API FUIEquipItemDataArray();
};

