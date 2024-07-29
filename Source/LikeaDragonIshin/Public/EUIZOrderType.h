#pragma once
#include "CoreMinimal.h"
#include "EUIZOrderType.generated.h"

UENUM(BlueprintType)
enum class EUIZOrderType : uint8 {
    NotSet,
    Backmost,
    Back,
    AdvBack,
    MgBack,
    BtlBack,
    SysBack,
    FadeBack,
    AdvMiddle,
    MgMiddle,
    Middle,
    BtlMiddle,
    SysMiddle,
    FadeMiddleLow,
    MenuDecoBackBack,
    MenuDecoBack,
    MenuMainBack,
    MenuMain,
    MenuMainFront,
    MenuDecoFront,
    MenuDecoFrontOver,
    MenuDecoFrontOverOver,
    FadeMiddle,
    FadeMiddleOver,
    FadeMiddleOverOver,
    AdvFront,
    CinemaScope,
    CinemaScopeOver,
    MgFront,
    BtlFront,
    SysFront,
    JibikiWindow,
    FadeFront,
    TipsInfo,
    Front,
    Foreground,
};

