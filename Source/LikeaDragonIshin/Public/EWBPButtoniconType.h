#pragma once
#include "CoreMinimal.h"
#include "EWBPButtoniconType.generated.h"

UENUM(BlueprintType)
enum class EWBPButtoniconType : uint8 {
    PS4_Batsu,
    PS4_Maru,
    PS4_Sankaku,
    PS4_Shikaku,
    PS4_R1,
    PS4_R2,
    PS4_L1,
    PS4_L2,
    PS4_Rstick,
    PS4_Lstick,
    PS4_R3,
    PS4_L3,
    PS4_Up,
    PS4_Down,
    PS4_Left,
    PS4_Right,
    PS4_Touchpad,
    PS4_Share,
    PS4_Options,
    DECIDE,
    CANCEL,
};

