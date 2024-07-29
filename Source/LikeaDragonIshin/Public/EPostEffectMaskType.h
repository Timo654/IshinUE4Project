#pragma once
#include "CoreMinimal.h"
#include "EPostEffectMaskType.generated.h"

UENUM(BlueprintType)
enum class EPostEffectMaskType : uint8 {
    invalid,
    Circle,
    Line,
    Num,
};

