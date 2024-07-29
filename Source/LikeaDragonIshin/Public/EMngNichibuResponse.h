#pragma once
#include "CoreMinimal.h"
#include "EMngNichibuResponse.generated.h"

UENUM(BlueprintType)
enum class EMngNichibuResponse : uint8 {
    NONE,
    GREAT,
    GOOD,
    BAD,
};

