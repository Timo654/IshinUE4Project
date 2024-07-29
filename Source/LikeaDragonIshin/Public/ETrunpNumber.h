#pragma once
#include "CoreMinimal.h"
#include "ETrunpNumber.generated.h"

UENUM(BlueprintType)
enum class ETrunpNumber : uint8 {
    card_A,
    card_2,
    card_3,
    card_4,
    card_5,
    card_6,
    card_7,
    card_8,
    card_9,
    card_10,
    card_J,
    card_Q,
    card_K,
    card_num,
    none,
};

