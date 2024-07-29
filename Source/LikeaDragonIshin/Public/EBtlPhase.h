#pragma once
#include "CoreMinimal.h"
#include "EBtlPhase.generated.h"

UENUM(BlueprintType)
enum class EBtlPhase : uint8 {
    None,
    Init,
    Start,
    Main,
    Finish,
    Max,
};

