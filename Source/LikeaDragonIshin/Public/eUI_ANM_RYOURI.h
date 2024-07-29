#pragma once
#include "CoreMinimal.h"
#include "eUI_ANM_RYOURI.generated.h"

UENUM(BlueprintType)
enum class eUI_ANM_RYOURI : uint8 {
    eUI_ANM_IN,
    eUI_ANM_STAY,
    eUI_ANM_OUT,
    eUI_ANM_PUSH,
    eUI_ANM_DEFAULTANIM,
    eUI_ANM_GREAT,
    eUI_ANM_GOOD,
    eUI_ANM_BAD,
    eUI_ANM_NUM,
    eUI_ANM_INVALID = eUI_ANM_NUM,
};

