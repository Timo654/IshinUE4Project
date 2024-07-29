#pragma once
#include "CoreMinimal.h"
#include "EChohanIkasamaState.generated.h"

UENUM(BlueprintType)
enum class EChohanIkasamaState : uint8 {
    IKASAMA_NONE,
    IKASAMA_WIN,
    IKASAMA_LOSE,
};

