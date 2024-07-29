#pragma once
#include "CoreMinimal.h"
#include "EAttributeResult.generated.h"

UENUM(BlueprintType)
enum class EAttributeResult : uint8 {
    AR_Achieve,
    AR_Reach,
    AR_UpdateAchieve,
    AR_None,
};

