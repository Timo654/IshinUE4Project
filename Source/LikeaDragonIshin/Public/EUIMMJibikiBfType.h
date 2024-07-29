#pragma once
#include "CoreMinimal.h"
#include "EUIMMJibikiBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMJibikiBfType : uint8 {
    DirtyVisibleList,
    DirtyInitList,
    DirtySelectItem,
    DirtyDecideItem,
    DirtyScrollExplain,
    DirtyReadDetail,
    DirtyCancelView,
    DirtyPageDown,
    DirtyPageUp,
};

