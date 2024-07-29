#pragma once
#include "CoreMinimal.h"
#include "EHanafudaPlayerType.generated.h"

UENUM(BlueprintType)
enum class EHanafudaPlayerType : uint8 {
    Self,
    Enemy,
    Max,
};

