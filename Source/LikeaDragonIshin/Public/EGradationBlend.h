#pragma once
#include "CoreMinimal.h"
#include "EGradationBlend.generated.h"

UENUM(BlueprintType)
enum class EGradationBlend : uint8 {
    Invalid,
    Add,
    Sub,
    Mul,
    Num,
};

