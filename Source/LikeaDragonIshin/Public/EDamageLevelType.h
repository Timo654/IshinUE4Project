#pragma once
#include "CoreMinimal.h"
#include "EDamageLevelType.generated.h"

UENUM(BlueprintType)
enum class EDamageLevelType : uint8 {
    LEVEL_0,
    LEVEL_1,
    LEVEL_2,
    LEVEL_3,
    LEVEL_4,
};

