#pragma once
#include "CoreMinimal.h"
#include "EDevil2LightType.generated.h"

UENUM(BlueprintType)
enum class EDevil2LightType : uint8 {
    Directional,
    Point,
    Reserved01,
    Reserved02,
    Num,
};

