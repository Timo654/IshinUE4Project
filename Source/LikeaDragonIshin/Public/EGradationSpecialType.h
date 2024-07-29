#pragma once
#include "CoreMinimal.h"
#include "EGradationSpecialType.generated.h"

UENUM(BlueprintType)
enum class EGradationSpecialType : uint8 {
    Invalid,
    ZCheck,
    SunLight,
    Vignetting,
    SortCheck,
    Num,
};

