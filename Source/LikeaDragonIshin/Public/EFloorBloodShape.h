#pragma once
#include "CoreMinimal.h"
#include "EFloorBloodShape.generated.h"

UENUM(BlueprintType)
enum class EFloorBloodShape : uint8 {
    YEN,
    FAN,
    LINEAR,
    NODE,
    NUM,
};

