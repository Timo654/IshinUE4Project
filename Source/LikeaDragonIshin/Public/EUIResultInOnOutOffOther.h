#pragma once
#include "CoreMinimal.h"
#include "EUIResultInOnOutOffOther.generated.h"

UENUM(BlueprintType)
enum class EUIResultInOnOutOffOther : uint8 {
    In,
    On,
    Out,
    Off,
    Other,
};

