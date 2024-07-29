#pragma once
#include "CoreMinimal.h"
#include "EBtlStartType.generated.h"

UENUM(BlueprintType)
enum class EBtlStartType : uint8 {
    None,
    NocutEncount,
    HactEncount,
    HactScenario,
    HactTalk,
    HactSetEncount,
    HactFirst,
    Max,
};

