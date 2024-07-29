#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8 {
    NORMAL,
    UPPER,
    TUKI,
    SLASH,
    SYNC,
};

