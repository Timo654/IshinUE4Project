#pragma once
#include "CoreMinimal.h"
#include "EDamageIdentAttr.generated.h"

UENUM(BlueprintType)
enum class EDamageIdentAttr : uint8 {
    NONE,
    NOGUARD,
    GUARDBREAK,
};

