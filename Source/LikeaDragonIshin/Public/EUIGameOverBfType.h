#pragma once
#include "CoreMinimal.h"
#include "EUIGameOverBfType.generated.h"

UENUM(BlueprintType)
enum class EUIGameOverBfType : uint8 {
    DirtyMain,
    LoopAnimPlaying,
};

