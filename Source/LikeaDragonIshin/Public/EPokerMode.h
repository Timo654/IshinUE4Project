#pragma once
#include "CoreMinimal.h"
#include "EPokerMode.generated.h"

UENUM(BlueprintType)
enum class EPokerMode : uint8 {
    Normal,
    Tutorial,
    num_,
    Invalid = num_,
};

