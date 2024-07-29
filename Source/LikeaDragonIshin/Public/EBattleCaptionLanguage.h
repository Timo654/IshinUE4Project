#pragma once
#include "CoreMinimal.h"
#include "EBattleCaptionLanguage.generated.h"

UENUM(BlueprintType)
enum class EBattleCaptionLanguage : uint8 {
    Jp,
    En,
    Other,
    Max,
};

