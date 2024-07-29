#pragma once
#include "CoreMinimal.h"
#include "EWeaponOfsTypes.generated.h"

UENUM(BlueprintType)
enum class EWeaponOfsTypes : uint8 {
    Non,
    Left,
    Right,
    Case,
    HActCenter,
    Sword,
    Num,
};

