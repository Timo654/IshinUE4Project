#pragma once
#include "CoreMinimal.h"
#include "EBtlCtrlKind.generated.h"

UENUM(BlueprintType)
enum class EBtlCtrlKind : uint8 {
    None,
    Cpu,
    GamePad1,
    GamePad2,
};

