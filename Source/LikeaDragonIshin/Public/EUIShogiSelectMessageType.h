#pragma once
#include "CoreMinimal.h"
#include "EUIShogiSelectMessageType.generated.h"

UENUM(BlueprintType)
enum class EUIShogiSelectMessageType : uint8 {
    YesNo,
    Promote,
};

