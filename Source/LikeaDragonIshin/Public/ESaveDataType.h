#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataType : uint8 {
    None,
    System,
    Game,
    GamePS4,
};

