#pragma once
#include "CoreMinimal.h"
#include "EPokerCameraType.generated.h"

UENUM(BlueprintType)
enum class EPokerCameraType : uint8 {
    Default,
    Result,
    Max,
};

