#pragma once
#include "CoreMinimal.h"
#include "LauncherState.generated.h"

UENUM(BlueprintType)
enum class LauncherState : uint8 {
    STAY_MIN,
    MIN2BIG,
    STAY_BIG,
    BIG2MIN,
};

