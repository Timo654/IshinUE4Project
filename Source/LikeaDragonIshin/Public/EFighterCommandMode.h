#pragma once
#include "CoreMinimal.h"
#include "EFighterCommandMode.generated.h"

UENUM(BlueprintType)
enum class EFighterCommandMode : uint8 {
    READY,
    ATTACK,
    CHANGE,
    SYNC,
    MOVE,
    HACT,
    DOWN,
    WEAPON,
    ACTION,
    PROVOKE,
    WALL,
    EQUIP,
    PIYORI,
    SYNC_F,
    SYNC_B,
    HARDDOWN,
    STAND,
    MAX,
};

