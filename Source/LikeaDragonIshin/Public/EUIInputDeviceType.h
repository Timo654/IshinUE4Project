#pragma once
#include "CoreMinimal.h"
#include "EUIInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EUIInputDeviceType : uint8 {
    DS4,
    DS5,
    XInput,
    PC,
};

