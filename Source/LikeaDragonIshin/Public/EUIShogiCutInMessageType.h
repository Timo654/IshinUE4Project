#pragma once
#include "CoreMinimal.h"
#include "EUIShogiCutInMessageType.generated.h"

UENUM(BlueprintType)
enum class EUIShogiCutInMessageType : uint8 {
    None,
    Oute,
    Giveup,
    Matta,
    Tsumi,
    Touryou,
    SuperMatta,
};

