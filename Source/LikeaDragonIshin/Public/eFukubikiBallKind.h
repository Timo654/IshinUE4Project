#pragma once
#include "CoreMinimal.h"
#include "eFukubikiBallKind.generated.h"

UENUM(BlueprintType)
enum class eFukubikiBallKind : uint8 {
    eFUKUBIKI_BALL_KIND_GOLD,
    eFUKUBIKI_BALL_KIND_RED,
    eFUKUBIKI_BALL_KIND_WHITE,
    eFUKUBIKI_BALL_KIND_BLUE,
    eFUKUBIKI_BALL_KIND_GREEN,
    eFUKUBIKI_BALL_KIND_NUM,
};

