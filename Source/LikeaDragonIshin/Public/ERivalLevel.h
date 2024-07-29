#pragma once
#include "CoreMinimal.h"
#include "ERivalLevel.generated.h"

UENUM(BlueprintType)
enum class ERivalLevel : uint8 {
    RL_Weak,
    RL_Normal,
    RL_Strong,
    RL_Arien,
};

