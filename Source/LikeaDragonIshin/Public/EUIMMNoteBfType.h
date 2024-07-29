#pragma once
#include "CoreMinimal.h"
#include "EUIMMNoteBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMNoteBfType : uint8 {
    DirtyVisibleList,
    DirtyInitList,
    DirtySelectItem,
    DirtyDecideItem,
    DirtyScrollNote,
    DirtyReadDetail,
    DirtyCancelView,
};

