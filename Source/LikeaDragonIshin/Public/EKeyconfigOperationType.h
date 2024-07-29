#pragma once
#include "CoreMinimal.h"
#include "EKeyconfigOperationType.generated.h"

UENUM(BlueprintType)
enum class EKeyconfigOperationType : uint8 {
    DEFAULT,
    RIGHT_HAND,
    LEFT_HAND,
    CUSTOM,
    DEF_MAX UMETA(Hidden),
};

