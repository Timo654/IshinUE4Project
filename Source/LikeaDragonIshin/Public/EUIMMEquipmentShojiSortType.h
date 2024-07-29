#pragma once
#include "CoreMinimal.h"
#include "EUIMMEquipmentShojiSortType.generated.h"

UENUM(BlueprintType)
enum class EUIMMEquipmentShojiSortType : uint8 {
    ATK,
    DEF,
    Rarity,
    Rank,
};

