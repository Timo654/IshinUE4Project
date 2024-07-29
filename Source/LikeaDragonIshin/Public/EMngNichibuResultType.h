#pragma once
#include "CoreMinimal.h"
#include "EMngNichibuResultType.generated.h"

UENUM(BlueprintType)
enum class EMngNichibuResultType : uint8 {
    DISQUALIFY,
    QUALIFY,
    GOOD,
    GREAT,
    EXCELLENT,
};

