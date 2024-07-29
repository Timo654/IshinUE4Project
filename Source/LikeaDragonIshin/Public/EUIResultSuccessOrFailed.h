#pragma once
#include "CoreMinimal.h"
#include "EUIResultSuccessOrFailed.generated.h"

UENUM(BlueprintType)
enum class EUIResultSuccessOrFailed : uint8 {
    Success,
    Failed,
};

