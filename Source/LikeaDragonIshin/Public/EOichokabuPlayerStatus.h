#pragma once
#include "CoreMinimal.h"
#include "EOichokabuPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EOichokabuPlayerStatus : uint8 {
    OPS_None,
    OPS_FirstChoice,
    OPS_BetCoin,
    OPS_DrawChoice,
    OPS_SelectDuelPlayer,
    OPS_SelectContinue,
    OPS_PlessDecide,
};

