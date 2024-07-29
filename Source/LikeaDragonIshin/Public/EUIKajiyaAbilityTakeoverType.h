#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaAbilityTakeoverType.generated.h"

UENUM(BlueprintType)
enum class EUIKajiyaAbilityTakeoverType : uint8 {
    Empty,
    Destroy,
    Inherit,
    Success,
    Failure,
    Unique,
    Percentage,
};

