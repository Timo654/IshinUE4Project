#pragma once
#include "CoreMinimal.h"
#include "EKaraokeMarkerMode.generated.h"

UENUM(BlueprintType)
enum class EKaraokeMarkerMode : uint8 {
    BAD,
    NORMAL,
    GOOD,
    MAX,
};

