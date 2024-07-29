#pragma once
#include "CoreMinimal.h"
#include "EDirType.generated.h"

UENUM(BlueprintType)
enum class EDirType : uint8 {
    FRONT,
    RIGHT,
    BACK,
    LEFT,
};

