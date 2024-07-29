#pragma once
#include "CoreMinimal.h"
#include "EUIMMOptionEditType.generated.h"

UENUM(BlueprintType)
enum class EUIMMOptionEditType : uint8 {
    Text,
    Slider,
    Language,
};

