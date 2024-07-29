#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceListenerPri.generated.h"

UENUM(BlueprintType)
enum class EInputDeviceListenerPri : uint8 {
    TOP,
    TOOL,
    DEBUG_CONTROL,
    DEBUG_SELECT,
    PAUSE,
    HIGH,
    NORMAL,
    LOW,
    SLEEP,
    num_,
    FLASH = DEBUG_SELECT,
};

