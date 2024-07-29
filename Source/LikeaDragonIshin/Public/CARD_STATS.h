#pragma once
#include "CoreMinimal.h"
#include "CARD_STATS.generated.h"

UENUM(BlueprintType)
enum class CARD_STATS : uint8 {
    DESERT,
    USED,
    SELECTED,
    REINFORCING,
    NOTICE,
    LVUP,
    MAX,
};

