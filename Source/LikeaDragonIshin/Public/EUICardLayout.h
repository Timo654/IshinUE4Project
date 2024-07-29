#pragma once
#include "CoreMinimal.h"
#include "EUICardLayout.generated.h"

UENUM(BlueprintType)
enum class EUICardLayout : uint8 {
    top,
    bottom,
    left,
    right,
    MAX,
};

