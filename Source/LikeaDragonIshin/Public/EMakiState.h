#pragma once
#include "CoreMinimal.h"
#include "EMakiState.generated.h"

UENUM(BlueprintType)
enum class EMakiState : uint8 {
    Invalid,
    Vanish,
    Grab,
    Set,
    Break,
    Fade,
};

