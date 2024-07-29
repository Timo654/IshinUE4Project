#pragma once
#include "CoreMinimal.h"
#include "EBtlValuation.generated.h"

UENUM(BlueprintType)
enum class EBtlValuation : uint8 {
    None,
    Repeatedly,
    MoreRepeatedly,
    MostRepeatedly,
    Criticalhit,
    Intercept,
    Intact,
    Avoid,
    Parry,
    TechHit,
    SkillHit,
    MAX,
};

