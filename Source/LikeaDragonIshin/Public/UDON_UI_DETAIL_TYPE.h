#pragma once
#include "CoreMinimal.h"
#include "UDON_UI_DETAIL_TYPE.generated.h"

UENUM(BlueprintType)
enum class UDON_UI_DETAIL_TYPE : uint8 {
    BASE,
    ORDER,
    BUTTON,
    COMBO,
    SCORE,
    RANKUP,
    MONEY,
    LIFE,
    ABILITY,
    CUTIN,
    EMERGENCY,
    CALL_START,
    CALL_END,
    RESULT,
};

