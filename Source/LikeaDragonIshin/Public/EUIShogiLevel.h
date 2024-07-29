#pragma once
#include "CoreMinimal.h"
#include "EUIShogiLevel.generated.h"

UENUM(BlueprintType)
enum class EUIShogiLevel : uint8 {
    None,
    Kyuu_Ten,
    Kyuu_Nine,
    Kyuu_Eight,
    Kyuu_Seven,
    Kyuu_Six,
    Kyuu_Five,
    Kyuu_Four,
    Kyuu_Three,
    Kyuu_Two,
    Kyuu_One,
    Dan_One,
    Dan_Two,
    Dan_Three,
    Dan_Four,
    Dan_Five,
    Dan_Six,
    Dan_Seven,
    Dan_Eight,
    Dan_Nine,
    Dan_Max UMETA(Hidden),
    King,
};

