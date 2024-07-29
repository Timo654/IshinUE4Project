#pragma once
#include "CoreMinimal.h"
#include "EBtlBuffDebuffStatsType.generated.h"

UENUM(BlueprintType)
enum class EBtlBuffDebuffStatsType : uint8 {
    Attack,
    Defence,
    Healing,
    SkillReinforce,
    SkillHaste,
    GuardBreak,
    FallPrevention,
    SuperArmor,
    HeatHaste,
    TimeStop,
    Armored,
    StunResist,
    Doudge,
    Burn,
    Poison,
    Bleeding,
    Max,
};

