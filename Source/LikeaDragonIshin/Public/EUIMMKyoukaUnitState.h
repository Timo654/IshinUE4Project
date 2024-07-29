#pragma once
#include "CoreMinimal.h"
#include "EUIMMKyoukaUnitState.generated.h"

UENUM(BlueprintType)
enum class EUIMMKyoukaUnitState : uint8 {
    Blank,
    Sealed,
    WhiteSoul,
    TrueSoul,
    PreWhiteSoul,
    PreTrueSoul,
    PreWhite2True,
    BreakTheSeal,
    Unsealed,
};

