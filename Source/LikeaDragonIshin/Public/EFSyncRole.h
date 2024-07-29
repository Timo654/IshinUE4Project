#pragma once
#include "CoreMinimal.h"
#include "EFSyncRole.generated.h"

UENUM(BlueprintType)
enum class EFSyncRole : uint8 {
    Require,
    Purge,
    Join,
    Down,
    StairDown,
    Bound,
    Piyori,
    MAX,
};

