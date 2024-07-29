#pragma once
#include "CoreMinimal.h"
#include "EFukubikiPrize.generated.h"

UENUM(BlueprintType)
enum class EFukubikiPrize : uint8 {
    Special,
    First,
    Second,
    Third,
    Off,
    Length,
};

