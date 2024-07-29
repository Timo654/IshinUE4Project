#pragma once
#include "CoreMinimal.h"
#include "EUIYakuzaCaptionBfType.generated.h"

UENUM(BlueprintType)
enum class EUIYakuzaCaptionBfType : uint8 {
    DirtySetup,
    DirtyAnimPlay,
    DirtyEnd,
    IsActive,
};

