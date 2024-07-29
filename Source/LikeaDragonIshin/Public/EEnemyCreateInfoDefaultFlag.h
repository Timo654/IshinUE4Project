#pragma once
#include "CoreMinimal.h"
#include "EEnemyCreateInfoDefaultFlag.generated.h"

UENUM(BlueprintType)
enum class EEnemyCreateInfoDefaultFlag : uint8 {
    Model,
    Hp,
    Exp,
    Height,
    Voice,
    Motion,
    Weapon,
    Item,
    UnUseLvOffset,
};

