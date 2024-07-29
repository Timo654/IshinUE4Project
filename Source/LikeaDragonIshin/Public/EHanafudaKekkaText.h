#pragma once
#include "CoreMinimal.h"
#include "EHanafudaKekkaText.generated.h"

UENUM(BlueprintType)
enum class EHanafudaKekkaText : uint8 {
    Kekka,
    Shoubu,
    SelfName,
    EnemyName,
    SelfPoint,
    EnemyPoint,
    Shohai,
    KaketenTitle,
    KaketenPoint,
};

