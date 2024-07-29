#pragma once
#include "CoreMinimal.h"
#include "EUIResultMouseButton.generated.h"

UENUM(BlueprintType)
enum class EUIResultMouseButton : uint8 {
    Left,
    Right,
    Middle,
    Other,
};

