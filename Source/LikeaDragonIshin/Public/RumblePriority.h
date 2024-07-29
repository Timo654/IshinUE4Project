#pragma once
#include "CoreMinimal.h"
#include "RumblePriority.generated.h"

UENUM(BlueprintType)
enum RumblePriority {
    RumblePrioVeryLow,
    RumblePrioLow,
    RumblePrioNormal,
    RumblePrioHigh,
    RumblePrioVeryHigh,
    RumblePrioNum,
    RumblePrioInvalid = -1,
};

