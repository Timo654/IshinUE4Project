#pragma once
#include "CoreMinimal.h"
#include "EBtlSpecialBattle.generated.h"

UENUM(BlueprintType)
enum class EBtlSpecialBattle : uint8 {
    None,
    Crowded,
    Tutorial,
    Strmax,
    BattleRoyal,
    LimitWeaponOnly,
    OnlyZetugi,
    WeaponChangeAttackOnly,
    HactOnly,
    Escape,
    TagBattle,
    Tougijo100,
    NpcDead,
    Edotaiho,
    Max,
    Invalid = 255,
};

