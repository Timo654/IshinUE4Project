#pragma once
#include "CoreMinimal.h"
#include "EUIMahjongCutInMessageType.generated.h"

UENUM(BlueprintType)
enum class EUIMahjongCutInMessageType : uint8 {
    None,
    Tsumo,
    Ron,
    Riichi,
    Pon,
    Chii,
    Kan,
    Ryuukyoku,
};

