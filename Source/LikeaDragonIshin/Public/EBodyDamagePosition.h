#pragma once
#include "CoreMinimal.h"
#include "EBodyDamagePosition.generated.h"

UENUM(BlueprintType)
enum class EBodyDamagePosition : uint8 {
    Face,
    Lip_L,
    Lip_R,
    Mune,
    Hara,
    Kata_L,
    Kara_R,
    Arm1_L,
    Arm2_L,
    Arm1_R,
    Arm2_R,
    Leg1_L,
    Leg2_L,
    Leg1_R,
    Leg2_R,
    Num,
};

