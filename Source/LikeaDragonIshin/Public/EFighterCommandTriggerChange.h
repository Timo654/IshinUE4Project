#pragma once
#include "CoreMinimal.h"
#include "EFighterCommandTriggerChange.generated.h"

UENUM(BlueprintType)
enum class EFighterCommandTriggerChange : uint8 {
    MYSELF,
    AUTH,
    SYNC,
    NEAR,
    FIND,
    ATTACK,
    MAX,
};

