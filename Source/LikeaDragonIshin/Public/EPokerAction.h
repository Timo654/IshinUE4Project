#pragma once
#include "CoreMinimal.h"
#include "EPokerAction.generated.h"

UENUM(BlueprintType)
enum class EPokerAction : uint8 {
    Bet,
    Raise,
    Call,
    Check,
    Falld,
    Little,
    Big,
    max,
};

