#pragma once
#include "CoreMinimal.h"
#include "EDiceMode.generated.h"

UENUM(BlueprintType)
enum class EDiceMode : uint8 {
    RANDOM,
    CHO6_HAN4,
    CHO4_HAN6,
    MANY1,
    MANY_ZORO,
    DICE_MODE_END,
};

