#pragma once
#include "CoreMinimal.h"
#include "EBetUI.generated.h"

UENUM(BlueprintType)
enum class EBetUI : uint8 {
    OpenDefaultWindow,
    OpenChohanWindow,
    CloseDefaultWindow,
    CloseChohanWindow,
    ShowDefaultWindow,
    ShowChohanWindow,
    HideDefaultWindow,
    HideChohanWindow,
    SetTextColorChohan,
    SetHavePoint,
    SetBetPoint,
    SetDividendPointChohan,
    PlayEntryAnimationChohan,
    PlayDecideAnimation,
    DividentTextChohan,
    Max,
};

