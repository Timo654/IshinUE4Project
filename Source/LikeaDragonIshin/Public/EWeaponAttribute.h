#pragma once
#include "CoreMinimal.h"
#include "EWeaponAttribute.generated.h"

UENUM(BlueprintType)
enum class EWeaponAttribute : uint8 {
    None,
    Fire,
    Special,
    MaxCount,
};

