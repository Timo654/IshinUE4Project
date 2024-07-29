#pragma once
#include "CoreMinimal.h"
#include "EAfterImageBlendModes.generated.h"

UENUM(BlueprintType)
enum class EAfterImageBlendModes : uint8 {
    Opaque,
    Blend,
    Additive,
    Modulate,
    AdditiveOne,
    Subtract,
    SubtractOne,
    AdditiveDstColor,
    AdditiveDstInvAlpha,
    Num,
};

