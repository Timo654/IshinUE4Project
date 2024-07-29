#pragma once
#include "CoreMinimal.h"
#include "EPokerHandCombination.generated.h"

UENUM(BlueprintType)
enum class EPokerHandCombination : uint8 {
    buta,
    pair,
    twoPair,
    threeCard,
    straight,
    flush,
    fullHouse,
    fourCard,
    straightFlush,
    royalStraightFlush,
    max,
};

