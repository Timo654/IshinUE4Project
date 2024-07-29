#pragma once
#include "CoreMinimal.h"
#include "ETaishiRarity.generated.h"

UENUM(BlueprintType)
enum class ETaishiRarity : uint8 {
    COMMON,
    UNCOMMON,
    RARE,
    EPIC,
    LEGENDARY,
    MAX,
};

