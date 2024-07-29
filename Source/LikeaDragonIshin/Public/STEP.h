#pragma once
#include "CoreMinimal.h"
#include "STEP.generated.h"

UENUM(BlueprintType)
enum class STEP : uint8 {
    SQ_READY,
    SQ_IN,
    SQ_BONUS_A,
    SQ_BONUS_A_wait,
    SQ_BONUS_B,
    SQ_BONUS_B_wait,
    SQ_WAIT,
    SQ_OUT,
};

