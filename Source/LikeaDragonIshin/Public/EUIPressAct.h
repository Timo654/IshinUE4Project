#pragma once
#include "CoreMinimal.h"
#include "EUIPressAct.generated.h"

UENUM(BlueprintType)
enum class EUIPressAct : uint8 {
    eACT_RENDA,
    eACT_TIMER,
    eACT_TIMER_DOUBLE,
    eACT_HACT,
    eACT_HACT_RENDA,
    eACT_OTHER,
    eACT_NUM,
    eACT_NONE,
};

