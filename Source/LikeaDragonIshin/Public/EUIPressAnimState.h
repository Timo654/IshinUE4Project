#pragma once
#include "CoreMinimal.h"
#include "EUIPressAnimState.generated.h"

UENUM(BlueprintType)
enum class EUIPressAnimState : uint8 {
    eNONE,
    eIN,
    eSTART,
    eFAIL,
    eSUCCESS,
    eOUT,
};

