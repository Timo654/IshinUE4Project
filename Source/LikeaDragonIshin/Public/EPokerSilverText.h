#pragma once
#include "CoreMinimal.h"
#include "EPokerSilverText.generated.h"

UENUM(BlueprintType)
enum class EPokerSilverText : uint8 {
    OpenCard,
    EndRound,
    ShowDown,
    River,
    Turn,
    Flop,
};

