#pragma once
#include "CoreMinimal.h"
#include "EKoikoiUI.generated.h"

UENUM(BlueprintType)
enum class EKoikoiUI : uint8 {
    DirtyOpenCustom,
    DirtyDecideCustom,
    DirtyUpdateCustomCursol,
    DirtyUpdateCustomSwitch,
    DirtyOpenSankaku,
    DirtyDecideSankaku,
    DirtyUpdateSankakuCursol,
    DirtyOpenCustomView,
    DirtyCloseCustomView,
    ShowUI,
    HideUI,
    Max,
};

