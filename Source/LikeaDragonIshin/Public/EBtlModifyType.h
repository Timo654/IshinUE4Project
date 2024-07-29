#pragma once
#include "CoreMinimal.h"
#include "EBtlModifyType.generated.h"

UENUM(BlueprintType)
enum class EBtlModifyType : uint8 {
    REVISE,
    WAIT_MOTION,
    MaxCount,
};

