#pragma once
#include "CoreMinimal.h"
#include "EUIAutoHScrollPlusPhase.generated.h"

UENUM(BlueprintType)
enum class EUIAutoHScrollPlusPhase : uint8 {
    NotSet,
    NotScroll,
    InPreparation,
    StartDelay,
    Scrolling,
    EndDelay,
    FadeOutDelay,
    FadeInDelay,
    Max,
};

