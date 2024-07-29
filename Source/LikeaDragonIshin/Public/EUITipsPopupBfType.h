#pragma once
#include "CoreMinimal.h"
#include "EUITipsPopupBfType.generated.h"

UENUM(BlueprintType)
enum class EUITipsPopupBfType : uint8 {
    DirtyVisiblePopup,
    DirtyVisibleDetail,
    DirtyViewDetail,
    DirtyPageIndex,
    DirtyTextPopup,
};

