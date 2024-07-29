#pragma once
#include "CoreMinimal.h"
#include "EUIAuthTelopGTBfType.generated.h"

UENUM(BlueprintType)
enum class EUIAuthTelopGTBfType : uint8 {
    DirtySetupTelop,
    DirtySetupAnim,
    DirtyAnimPlay,
    DirtyEnd,
    IsActive,
};

