#pragma once
#include "CoreMinimal.h"
#include "EUIResultValidOrInvalid.generated.h"

UENUM(BlueprintType)
enum class EUIResultValidOrInvalid : uint8 {
    Valid,
    Invalid,
};

