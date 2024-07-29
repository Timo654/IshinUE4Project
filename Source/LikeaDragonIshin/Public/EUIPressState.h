#pragma once
#include "CoreMinimal.h"
#include "EUIPressState.generated.h"

UENUM(BlueprintType)
enum class EUIPressState : uint8 {
    eSTATE_PREPARE,
    eSTATE_PREPARE_FAILED,
    eSTATE_START,
    eSTATE_SUCCESS_1,
    eSTATE_SUCCESS_2,
    eSTATE_FAILED,
    eSTATE_DECIDE,
    eSTATE_STOP,
    eSTATE_NUM,
    eSTATE_NONE,
};

