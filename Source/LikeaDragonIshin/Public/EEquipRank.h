#pragma once
#include "CoreMinimal.h"
#include "EEquipRank.generated.h"

UENUM(BlueprintType)
enum class EEquipRank : uint8 {
    BLUNT,
    NORMAL,
    GOOD,
    BETTER,
    BEST,
    MAX,
};

