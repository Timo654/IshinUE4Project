#pragma once
#include "CoreMinimal.h"
#include "ERyouriMenuType.generated.h"

UENUM(BlueprintType)
enum class ERyouriMenuType : uint8 {
    Empty,
    List,
    Detail,
    Warning,
    Max,
};

