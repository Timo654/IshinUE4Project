#pragma once
#include "CoreMinimal.h"
#include "ERyouriMenuUI.generated.h"

UENUM(BlueprintType)
enum class ERyouriMenuUI : uint8 {
    OpenList,
    CloseList,
    OpenDetail,
    CloseDetail,
    OpenWarning,
    CloseWarning,
    OpenButton,
    CloseButton,
    OpenMessage,
    CloseMessage,
    ListEntrysUpdate,
    ListScrollUpdate,
    ListSelectUpdate,
    UpdateDetailWindow,
    UpdateHarukaWindow,
    ListScrollUpdate_Wheel,
    Max,
};

