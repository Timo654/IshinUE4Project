#pragma once
#include "CoreMinimal.h"
#include "ETextureType.generated.h"

UENUM(BlueprintType)
enum class ETextureType : uint8 {
    BaseColor,
    BaseColorDetail,
    Multi,
    MultiDetail,
    Normal,
    NormalDetail,
    Diffuse,
    Max,
};

