#pragma once
#include "CoreMinimal.h"
#include "EDamageNotifyCalcType.generated.h"

UENUM(BlueprintType)
enum class EDamageNotifyCalcType : uint8 {
    Fix,
    Style,
    Weapon,
};

