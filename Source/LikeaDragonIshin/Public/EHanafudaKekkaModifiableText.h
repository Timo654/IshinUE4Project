#pragma once
#include "CoreMinimal.h"
#include "EHanafudaKekkaModifiableText.generated.h"

UENUM(BlueprintType)
enum class EHanafudaKekkaModifiableText : uint8 {
    Shoubu,
    SelfName,
    EnemyName,
    SelfPoint,
    EnemyPoint,
    Shohai,
    KaketenPoint,
};

