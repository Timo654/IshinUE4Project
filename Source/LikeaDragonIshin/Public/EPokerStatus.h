#pragma once
#include "CoreMinimal.h"
#include "EPokerStatus.generated.h"

UENUM(BlueprintType)
enum class EPokerStatus : uint8 {
    Rest,
    Move_Wait,
    Move,
};

