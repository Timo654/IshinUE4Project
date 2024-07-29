#pragma once
#include "CoreMinimal.h"
#include "EBlurTypes.generated.h"

UENUM(BlueprintType)
enum class EBlurTypes : uint8 {
    MultipleExposureNormal,
    MultipleExposureScale,
    Motion,
    Pan,
    Dolly,
    Num,
};

