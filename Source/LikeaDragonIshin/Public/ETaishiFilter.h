#pragma once
#include "CoreMinimal.h"
#include "ETaishiFilter.generated.h"

UENUM(BlueprintType)
enum class ETaishiFilter : uint8 {
    ALL,
    Attack,
    Defense,
    Cure,
    Support,
    Assist,
    Katana,
    Yari,
    Jyuu,
    Sude,
    MAX,
};

