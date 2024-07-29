#pragma once
#include "CoreMinimal.h"
#include "EUIState.generated.h"

UENUM(BlueprintType)
enum class EUIState : uint8 {
    NotSet,
    In,
    Stay,
    Out,
    On,
    Off,
    Focused,
    Normal,
    Pressed,
    Release,
    DisabledFocused,
    DisabledNormal,
    Destory,
};

