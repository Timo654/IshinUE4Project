#pragma once
#include "CoreMinimal.h"
#include "EGamePlayModeFilter.generated.h"

UENUM(BlueprintType)
enum class EGamePlayModeFilter : uint8 {
    None,
    Adventure,
    Battle,
    Auth = 4,
};

