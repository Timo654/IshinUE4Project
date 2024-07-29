#pragma once
#include "CoreMinimal.h"
#include "EUIPlatformType.generated.h"

UENUM(BlueprintType)
enum class EUIPlatformType : uint8 {
    Undef,
    PS4,
    PS5,
    One,
    XSX,
    Win,
    MSS,
};

