#pragma once
#include "CoreMinimal.h"
#include "EVoicerId.generated.h"

UENUM(BlueprintType)
enum class EVoicerId : uint8 {
    Kiryu,
    Majima,
    Akiyama,
    Saejima,
    MaxCount,
    Invalid = 255,
};

