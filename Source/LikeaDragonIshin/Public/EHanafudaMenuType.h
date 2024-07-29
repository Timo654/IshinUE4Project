#pragma once
#include "CoreMinimal.h"
#include "EHanafudaMenuType.generated.h"

UENUM(BlueprintType)
enum class EHanafudaMenuType : uint8 {
    Begining,
    InGame,
    Continue,
    KikuSakazuki,
};

