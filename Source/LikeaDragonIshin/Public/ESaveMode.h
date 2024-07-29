#pragma once
#include "CoreMinimal.h"
#include "ESaveMode.generated.h"

UENUM(BlueprintType)
enum class ESaveMode : uint8 {
    Save,
    Load,
};

