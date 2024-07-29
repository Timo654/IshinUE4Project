#pragma once
#include "CoreMinimal.h"
#include "LauncherDeviceMode.generated.h"

UENUM(BlueprintType)
enum class LauncherDeviceMode : uint8 {
    LDM_CONSOLE,
    LDM_INDEPENDENT,
};

