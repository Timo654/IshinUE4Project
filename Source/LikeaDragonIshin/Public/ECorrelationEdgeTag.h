#pragma once
#include "CoreMinimal.h"
#include "ECorrelationEdgeTag.generated.h"

UENUM(BlueprintType)
enum class ECorrelationEdgeTag : uint8 {
    None,
    Left = 2,
    Top = 4,
    Right = 8,
    Bottom = 16,
};

