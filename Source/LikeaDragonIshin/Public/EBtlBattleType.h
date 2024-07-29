#pragma once
#include "CoreMinimal.h"
#include "EBtlBattleType.generated.h"

UENUM(BlueprintType)
enum class EBtlBattleType : uint8 {
    Normal,
    Boss,
    Encount,
    Many,
    Chase,
    Max,
};

