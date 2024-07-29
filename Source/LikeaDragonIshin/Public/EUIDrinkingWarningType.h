#pragma once
#include "CoreMinimal.h"
#include "EUIDrinkingWarningType.generated.h"

UENUM(BlueprintType)
enum class EUIDrinkingWarningType : uint8 {
    Safe,
    Red,
    Blue,
};

