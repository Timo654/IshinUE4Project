#pragma once
#include "CoreMinimal.h"
#include "EChohanButtonState.generated.h"

UENUM(BlueprintType)
enum class EChohanButtonState : uint8 {
    BUTTON_NORMAL,
    BUTTON_SUCCES,
    BUTTON_FAILE,
    BUTTON_NONE,
};

