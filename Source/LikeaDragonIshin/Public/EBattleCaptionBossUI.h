#pragma once
#include "CoreMinimal.h"
#include "EBattleCaptionBossUI.generated.h"

UENUM(BlueprintType)
enum class EBattleCaptionBossUI : uint8 {
    SetDaimon,
    SetLong,
    SetSB2,
    SetSB2NameOnle,
    SetSB2Text,
    SetSB2TextNameOnle,
    SetSB3,
    PlayDaimon,
    PlayLong,
    PlaySB2,
    PlaySB3,
    Stop,
    Max,
};

