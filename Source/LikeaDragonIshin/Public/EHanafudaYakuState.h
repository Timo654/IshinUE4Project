#pragma once
#include "CoreMinimal.h"
#include "EHanafudaYakuState.generated.h"

UENUM(BlueprintType)
enum class EHanafudaYakuState : uint8 {
    Normal,
    NotYet,
    Done,
};

