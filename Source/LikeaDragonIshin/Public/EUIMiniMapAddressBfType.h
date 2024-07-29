#pragma once
#include "CoreMinimal.h"
#include "EUIMiniMapAddressBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMiniMapAddressBfType : uint8 {
    DirtyMiniMap,
    DirtyAddress01,
    DirtyAddress02,
};

