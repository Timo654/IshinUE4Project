#pragma once
#include "CoreMinimal.h"
#include "ERyouriButtonType.generated.h"

UENUM(BlueprintType)
enum class ERyouriButtonType : uint8 {
    Decide,
    Cancel,
    Max,
};

