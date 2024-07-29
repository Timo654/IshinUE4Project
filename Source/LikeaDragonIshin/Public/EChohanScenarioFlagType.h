#pragma once
#include "CoreMinimal.h"
#include "EChohanScenarioFlagType.generated.h"

UENUM(BlueprintType)
enum class EChohanScenarioFlagType : uint8 {
    MNG_COMP_DRAW_CHOHAN,
    YOSOU_FIRST,
    YOSOU_SECOND,
    SASHI_SHOBU,
    SAGAKE_OPEN,
    FIRST_CONTROLLER_INFO_09_CHOHAN,
};

