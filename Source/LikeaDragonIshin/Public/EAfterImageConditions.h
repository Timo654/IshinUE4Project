#pragma once
#include "CoreMinimal.h"
#include "EAfterImageConditions.generated.h"

UENUM(BlueprintType)
enum class EAfterImageConditions : uint8 {
    All,
    Tsukami,
    Nage,
    CancelSway,
    WithoutCancelSway,
    CancelSwayPlus,
    Fujin,
    WithoutFujin,
    Num,
};

