#pragma once
#include "CoreMinimal.h"
#include "EUITitleMenuItemType.generated.h"

UENUM(BlueprintType)
enum class EUITitleMenuItemType : uint8 {
    NewGame,
    Continue,
    Reminiscence,
    Settings,
    Rights,
    DLC,
    NewGamePlus,
    PADV,
    Challeng,
    TgsMenuNoon,
    TgsMenuNight,
    TgsMenuOptions,
    TakeOverPS4,
    Shutdown,
    Empty,
};

