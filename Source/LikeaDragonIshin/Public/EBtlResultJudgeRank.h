#pragma once
#include "CoreMinimal.h"
#include "EBtlResultJudgeRank.generated.h"

UENUM(BlueprintType)
enum class EBtlResultJudgeRank : uint8 {
    RANK_H,
    RANK_G,
    RANK_F,
    RANK_E,
    RANK_D,
    RANK_C,
    RANK_B,
    RANK_A,
};

