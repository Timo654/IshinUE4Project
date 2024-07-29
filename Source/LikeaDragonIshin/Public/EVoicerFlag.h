#pragma once
#include "CoreMinimal.h"
#include "EVoicerFlag.generated.h"

UENUM(BlueprintType)
enum class EVoicerFlag : uint8 {
    None,
    Kiryu,
    Majima,
    Akiyama = 4,
    Saejima = 8,
    All = 255,
};

