#pragma once
#include "CoreMinimal.h"
#include "EChohanBets.generated.h"

UENUM(BlueprintType)
enum class EChohanBets : uint8 {
    BETS_CHO,
    BETS_HAN,
    BETS_1DICE_SELECT,
    BETS_2DICE_SELECT,
    BETS_END,
};

