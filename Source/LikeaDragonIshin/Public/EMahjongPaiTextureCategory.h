#pragma once
#include "CoreMinimal.h"
#include "EMahjongPaiTextureCategory.generated.h"

UENUM(BlueprintType)
enum class EMahjongPaiTextureCategory : uint8 {
    Wanzu,
    Souzu,
    Pinzu,
    Kaze,
    Sangen,
    None,
};

