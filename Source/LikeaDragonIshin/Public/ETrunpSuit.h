#pragma once
#include "CoreMinimal.h"
#include "ETrunpSuit.generated.h"

UENUM(BlueprintType)
enum class ETrunpSuit : uint8 {
    spade,
    heart,
    dia,
    club,
    num,
    force_dword,
    unknown,
};

