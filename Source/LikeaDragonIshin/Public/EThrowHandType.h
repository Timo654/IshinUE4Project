#pragma once
#include "CoreMinimal.h"
#include "EThrowHandType.generated.h"

UENUM(BlueprintType)
enum class EThrowHandType : uint8 {
    Both,
    Right,
    Left,
    MaxCount,
    Invalid = 255,
};

