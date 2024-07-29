#pragma once
#include "CoreMinimal.h"
#include "EUIPressKind.generated.h"

UENUM(BlueprintType)
enum class EUIPressKind : uint8 {
    eNORMAL,
    eRENDA,
    eQTE_RENDA,
    eALLOW,
    eOTHER,
    eMAX,
};

