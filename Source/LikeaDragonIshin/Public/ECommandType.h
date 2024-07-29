#pragma once
#include "CoreMinimal.h"
#include "ECommandType.generated.h"

UENUM(BlueprintType)
enum class ECommandType : uint8 {
    Light,
    Heavy,
    Action,
    Sway,
    Shift,
    Provoke,
    Guard,
    Skill,
    Up,
    Down,
    Left,
    Right,
    CameraSubJ,
    L3,
    MaxCount,
};

