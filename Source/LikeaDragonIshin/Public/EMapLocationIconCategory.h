#pragma once
#include "CoreMinimal.h"
#include "EMapLocationIconCategory.generated.h"

UENUM(BlueprintType)
enum class EMapLocationIconCategory : uint8 {
    ICON_DESTINATION,
    ICON_EVENT,
    ICON_MISSION,
    ICON_POINT,
    ICON_SAVE,
    ICON_TAXI,
    ICON_FOOD,
    ICON_FUKUBIKI,
    ICON_GAME,
    ICON_SHOP,
    ICON_TRAINING,
    ICON_WHITE_CIRCLE,
    ICON_ARROW,
    ICON_SINAN_ARROW,
    ICON_USER_MARKER,
    ICON_DEST_ARROW,
    ICON_DUMMY,
    ICON_INVALID,
};

