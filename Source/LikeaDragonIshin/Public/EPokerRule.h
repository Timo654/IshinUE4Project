#pragma once
#include "CoreMinimal.h"
#include "EPokerRule.generated.h"

UENUM(BlueprintType)
enum class EPokerRule : uint8 {
    TexasHoldem,
    Pineapple,
    Omaha,
    num_,
    Invalid = num_,
};

