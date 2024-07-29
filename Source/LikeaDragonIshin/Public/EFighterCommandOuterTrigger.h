#pragma once
#include "CoreMinimal.h"
#include "EFighterCommandOuterTrigger.generated.h"

UENUM(BlueprintType)
enum class EFighterCommandOuterTrigger : uint8 {
    NONE,
    DEAD,
    SYNC_CANCEL,
    DAMAGE,
    MAX,
};

