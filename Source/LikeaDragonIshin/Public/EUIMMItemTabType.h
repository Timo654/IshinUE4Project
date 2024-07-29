#pragma once
#include "CoreMinimal.h"
#include "EUIMMItemTabType.generated.h"

UENUM(BlueprintType)
enum class EUIMMItemTabType : uint8 {
    CarryItem,
    Crops,
    Fish,
    Material,
    Valuables,
};

