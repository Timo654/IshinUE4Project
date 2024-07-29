#pragma once
#include "CoreMinimal.h"
#include "EUIMMItemBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMItemBfType : uint8 {
    DirtyMain,
    DirtyModelFish,
    DirtyModelValuables,
    DirtyItemArray,
    DirtyUsed,
    DirtySort,
    DirtyTabBadge,
    PlayingPopupUsedMessage,
};

