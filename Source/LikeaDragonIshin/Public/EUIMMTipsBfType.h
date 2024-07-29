#pragma once
#include "CoreMinimal.h"
#include "EUIMMTipsBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMTipsBfType : uint8 {
    DirtyVisible,
    DirtyInitCategory,
    DirtyInitTips,
    DirtyCategoryItem,
    DirtyTipsItem,
    DirtyCategoryDecide,
    DirtyTipsDecide,
    DirtyTipsCancel,
};

