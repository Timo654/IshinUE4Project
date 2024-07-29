#pragma once
#include "CoreMinimal.h"
#include "ELuckType.generated.h"

UENUM(BlueprintType)
enum class ELuckType : uint8 {
    NORMAL,
    GOOD,
    BAD,
    LEFTOVERS,
    LUCK_TYPE_NUM,
};

