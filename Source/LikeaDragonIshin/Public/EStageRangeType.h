#pragma once
#include "CoreMinimal.h"
#include "EStageRangeType.generated.h"

UENUM(BlueprintType)
enum class EStageRangeType : uint8 {
    CAMERA,
    LDC,
    LP,
    LDS,
    LS,
    SOUND,
    TELOP,
    CCR,
    NRA,
    PRELOAD,
    CLIPBOX,
    CLIPON,
    AREA_ID,
    SHOP_CAM,
    BREAK_OBJ,
    NO_FP_CAM,
    RAIN_FILTER,
    BREAK_SCN,
    SCN,
    SCX,
};

