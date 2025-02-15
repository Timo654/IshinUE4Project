#pragma once
#include "CoreMinimal.h"
#include "EPadButton.generated.h"

UENUM(BlueprintType)
enum class EPadButton : uint8 {
    A,
    B,
    X,
    Y,
    BLACK,
    WHITE,
    L,
    R,
    START,
    BACK,
    L_THUMB,
    R_THUMB,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    L_UP,
    L_DOWN,
    L_LEFT,
    L_RIGHT,
    R_UP,
    R_DOWN,
    R_LEFT,
    R_RIGHT,
    EX_DECIDE,
    EX_CANCEL,
    EX_START_PAUSE,
    EX_SELECT_PAUSE,
    RESERVED1,
    RESERVED2,
    RESERVED3,
    RESERVED4,
    MAX,
    L_STICK,
    R_STICK,
    SHARE,
    UI_TEX_MAX UMETA(Hidden),
    DECIDE,
    CANCEL,
    ALL_UP,
    ALL_DOWN,
    ALL_LEFT,
    ALL_RIGHT,
    DA_UP,
    DA_DOWN,
    DA_LEFT,
    DA_RIGHT,
    BATSU = A,
    MARU = B,
    SHIKAKU = X,
    SANKAKU = Y,
    L2 = BLACK,
    R2 = WHITE,
    L1 = L,
    R1 = R,
    SELECT = BACK,
    L3 = L_THUMB,
    R3 = R_THUMB,
    TRIANGLE = Y,
    SQUARE = X,
    CROSS = A,
    CIRCLE = B,
};

