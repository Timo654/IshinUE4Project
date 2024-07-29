#pragma once
#include "CoreMinimal.h"
#include "EChohanBakutoSerifu.generated.h"

UENUM(BlueprintType)
enum class EChohanBakutoSerifu : uint8 {
    eBV_WIN,
    eBV_LOSE,
    eBV_NICE_PLAY,
    eBV_BAD_PLAY,
    eBV_CHO,
    eBV_HAN,
};

