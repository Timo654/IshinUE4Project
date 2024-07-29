#pragma once
#include "CoreMinimal.h"
#include "EInputType.generated.h"

UENUM(BlueprintType)
enum class EInputType : uint8 {
    None,
    Press,
    Hold,
    Release,
    Num,
};

