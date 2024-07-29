#pragma once
#include "CoreMinimal.h"
#include "EFighterDataFlag.generated.h"

UENUM(BlueprintType)
enum class EFighterDataFlag : uint8 {
    UseDefaultParam,
    UseAI,
    FromWdr,
    DisposeAir,
    IMLeader,
    ReSeize,
    EncountEnemy,
    Berserk,
    UseAINoMot,
    DisableRun,
    HactStandby,
    EquipHachigane,
    EquipMenbo,
    EquipYoroi,
    EncounterIdle,
    EncounterWalk,
    EncounterEvent,
    Stalker,
    Num,
};

