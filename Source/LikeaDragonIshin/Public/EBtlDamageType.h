#pragma once
#include "CoreMinimal.h"
#include "EBtlDamageType.generated.h"

UENUM(BlueprintType)
enum class EBtlDamageType : uint8 {
    Normal,
    Decreased,
    Cure,
    Critical,
    Hact,
    DecreasedCritical,
};

