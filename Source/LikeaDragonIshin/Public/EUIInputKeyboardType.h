#pragma once
#include "CoreMinimal.h"
#include "EUIInputKeyboardType.generated.h"

UENUM(BlueprintType)
enum class EUIInputKeyboardType : uint8 {
    symbol,
    symbol_for_ger,
    symbol_for_spa,
    symbol_for_esp,
    symbol_for_fra,
    symbol_for_ita,
    symbol_for_pol,
    symbol_for_por,
    symbol_for_jpn,
};

