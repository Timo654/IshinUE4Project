#pragma once
#include "CoreMinimal.h"
#include "EMakiWariState.generated.h"

UENUM(BlueprintType)
enum class EMakiWariState : uint8 {
    Invalid,
    Load,
    Stand,
    Cut,
    End,
    BlackOut,
};

