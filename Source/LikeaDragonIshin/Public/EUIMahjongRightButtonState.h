#pragma once
#include "CoreMinimal.h"
#include "EUIMahjongRightButtonState.generated.h"

UENUM(BlueprintType)
enum class EUIMahjongRightButtonState : uint8 {
    None,
    In,
    Stay,
    Out,
    Sel_In,
    Sel_Stay,
    Sel_Out,
};

