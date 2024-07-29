#pragma once
#include "CoreMinimal.h"
#include "ENoDamageReactNotifyType.generated.h"

UENUM(BlueprintType)
enum class ENoDamageReactNotifyType : uint8 {
    Normal1,
    Normal2,
    Strong1,
    Strong2,
    AttackBreak,
};

