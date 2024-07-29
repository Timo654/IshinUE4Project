#pragma once
#include "CoreMinimal.h"
#include "EUIAnchorType.generated.h"

UENUM(BlueprintType)
enum class EUIAnchorType : uint8 {
    TopLeft,
    TopCenter,
    TopRight,
    CenterLeft,
    CenterCenter,
    CenterRight,
    BottomLeft,
    BottomCenter,
    BottomRight,
};

