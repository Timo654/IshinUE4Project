#pragma once
#include "CoreMinimal.h"
#include "EFighterCommandRendaType.generated.h"

UENUM(BlueprintType)
enum class EFighterCommandRendaType : uint8 {
    NORMAL,
    SEIZE,
    STANDUP,
    NAGE,
    MAX,
};

