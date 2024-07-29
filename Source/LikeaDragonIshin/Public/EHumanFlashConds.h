#pragma once
#include "CoreMinimal.h"
#include "EHumanFlashConds.generated.h"

UENUM(BlueprintType)
enum class EHumanFlashConds : uint8 {
    Always,
    SabakiUp,
    NotSkillSabakiUp,
    Num,
};

