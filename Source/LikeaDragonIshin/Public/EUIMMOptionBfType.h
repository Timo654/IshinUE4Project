#pragma once
#include "CoreMinimal.h"
#include "EUIMMOptionBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMOptionBfType : uint8 {
    DirtyMainCategory,
    DirtySubCategory,
    DirtyColorAdjustment,
};

