#pragma once
#include "CoreMinimal.h"
#include "BR_TAISHI_STEP.generated.h"

UENUM(BlueprintType)
enum class BR_TAISHI_STEP : uint8 {
    ST_IN,
    ST_SELECT,
    ST_PERFORM,
    ST_VIEW,
    ST_OUT,
};

