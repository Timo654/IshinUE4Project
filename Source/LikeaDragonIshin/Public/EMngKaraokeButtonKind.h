#pragma once
#include "CoreMinimal.h"
#include "EMngKaraokeButtonKind.generated.h"

UENUM(BlueprintType)
enum class EMngKaraokeButtonKind : uint8 {
    Batsu,
    Maru,
    Shikaku,
    Sankaku,
    Left,
    Right,
};

