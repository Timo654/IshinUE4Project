#pragma once
#include "CoreMinimal.h"
#include "EMouseCursorShowMode.generated.h"

UENUM(BlueprintType)
enum class EMouseCursorShowMode : uint8 {
    AUTO,
    HIDE_FORCE,
    SHOW_FORCE,
    HIDE_FIXED,
};

