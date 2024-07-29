#pragma once
#include "CoreMinimal.h"
#include "EUIAuthTelopArasujiBfType.generated.h"

UENUM(BlueprintType)
enum class EUIAuthTelopArasujiBfType : uint8 {
    DirtySetup,
    DirtyAnimPlay,
    DirtyEnd,
    IsActive,
};

