#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaLevelInfoStateType.generated.h"

UENUM(BlueprintType)
enum class EUIKajiyaLevelInfoStateType : uint8 {
    Locked,
    Open,
    Released,
};

