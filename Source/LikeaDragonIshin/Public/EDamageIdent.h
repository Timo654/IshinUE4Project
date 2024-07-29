#pragma once
#include "CoreMinimal.h"
#include "EDamageIdent.generated.h"

UENUM(BlueprintType)
enum class EDamageIdent : uint8 {
    NONE,
    NOGUARD,
    GUARDBREAK,
    COMRADE,
    FORCE_BOSS,
    NO_REGUARD,
    BREAK_ARM,
    SEIZE,
    WEAPONSET,
    PIYORI,
};

