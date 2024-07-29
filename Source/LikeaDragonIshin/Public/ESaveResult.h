#pragma once
#include "CoreMinimal.h"
#include "ESaveResult.generated.h"

UENUM(BlueprintType)
enum class ESaveResult : uint8 {
    SUCCESS,
    FAILURE,
    APP_VER_ERROR,
    PLAYGO_ERROR,
    NO_FREE_SPACE,
};

