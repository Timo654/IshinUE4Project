#pragma once
#include "CoreMinimal.h"
#include "ESaveDataStatus.generated.h"

UENUM(BlueprintType)
enum class ESaveDataStatus : uint8 {
    OK,
    DoesNotExist,
    Corrupt,
    UnspecifiedError,
    Empty,
};

