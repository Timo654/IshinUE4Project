#pragma once
#include "CoreMinimal.h"
#include "EAttackDamageType.generated.h"

UENUM(BlueprintType)
enum class EAttackDamageType : uint8 {
    AIR,
    AIR_S,
    AVOID,
    BLIND,
    BODY,
    BODY_PUSH,
    BOUND,
    BOUND_SPOT,
    Default,
    DIRECT,
    DIRECT_BOUND,
    ELEC,
    EXPLODE,
    FIRE,
    INTERIOR,
    NORMAL,
    PIYORI,
    PUSH,
    SLASH,
    SLASH_L,
    SLASH_R,
    SLIP,
    STUN,
    SYNC,
    TRAMPLE,
    TRAMPLE_BOUND,
    TUKI,
    UPPER,
    BIRIBIRI,
    SPECIAL,
};

