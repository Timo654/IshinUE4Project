#pragma once
#include "CoreMinimal.h"
#include "EN_TYPE.generated.h"

UENUM(BlueprintType)
enum class EN_TYPE : uint8 {
    NORMAL,
    BOSS,
    NPC,
    MAX,
};

