#pragma once
#include "CoreMinimal.h"
#include "ETaishiType.generated.h"

UENUM(BlueprintType)
enum class ETaishiType : uint8 {
    Attack,
    Defense,
    Cure,
    Support,
    Assist,
};

