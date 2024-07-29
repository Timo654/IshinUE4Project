#pragma once
#include "CoreMinimal.h"
#include "EMngKaraokeWindowType.generated.h"

UENUM(BlueprintType)
enum class EMngKaraokeWindowType : uint8 {
    SELECT_MUSIC,
    SELECT_DIFFICULT,
    RESULT,
    SELECT_FLASHBACK,
    TOPMENU,
    SELECT_LYRIC_TYPE,
    Count,
};

