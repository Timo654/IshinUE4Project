#pragma once
#include "CoreMinimal.h"
#include "EAbilityFrameType.generated.h"

UENUM(BlueprintType)
enum class EAbilityFrameType : uint8 {
    NONE,
    NORMAL_ATK,
    NORMAL_DEF,
    UNIQUE_ATK,
    UNIQUE_DEF,
};

