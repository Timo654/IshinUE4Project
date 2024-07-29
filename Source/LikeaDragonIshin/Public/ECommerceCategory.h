#pragma once
#include "CoreMinimal.h"
#include "ECommerceCategory.generated.h"

UENUM(BlueprintType)
enum class ECommerceCategory : uint8 {
    VEGETABLE,
    FISH,
    FOOD,
    OTHER,
    NUM,
    UNKNOWN,
};

