#pragma once
#include "CoreMinimal.h"
#include "EItemAbilityRarity.generated.h"

UENUM(BlueprintType)
enum class EItemAbilityRarity : uint8 {
    None,
    Bronze,
    Silver,
    Gold,
};

