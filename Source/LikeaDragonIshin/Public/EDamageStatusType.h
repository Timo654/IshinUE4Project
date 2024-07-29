#pragma once
#include "CoreMinimal.h"
#include "EDamageStatusType.generated.h"

UENUM(BlueprintType)
enum class EDamageStatusType : uint8 {
    READY,
    DOWN_AO,
    DOWN_UTU,
    FLYDAMAGE,
    FLOAT,
    BOUND_AO,
    BOUND_UTU,
};

