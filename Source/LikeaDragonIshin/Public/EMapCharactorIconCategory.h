#pragma once
#include "CoreMinimal.h"
#include "EMapCharactorIconCategory.generated.h"

UENUM(BlueprintType)
enum class EMapCharactorIconCategory : uint8 {
    CH_NPC,
    CH_BOSS,
    CH_ENEMY,
    CH_DOUSIN,
    CH_PLAYER,
    CH_DUMMY,
};

