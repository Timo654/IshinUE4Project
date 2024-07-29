#pragma once
#include "CoreMinimal.h"
#include "EPostEffectPriority.generated.h"

UENUM(BlueprintType)
enum class EPostEffectPriority : uint8 {
    invalid,
    ColorCorrection,
    PanBlur,
    DollyBlur,
    GradationLine,
    GradationCircle1,
    GradationCircle2,
    GradationCircle3,
    Num,
};

