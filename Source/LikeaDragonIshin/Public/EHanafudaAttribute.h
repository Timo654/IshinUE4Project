#pragma once
#include "CoreMinimal.h"
#include "EHanafudaAttribute.generated.h"

UENUM(BlueprintType)
enum class EHanafudaAttribute : uint8 {
    HA_Gokou,
    HA_Shikou,
    HA_Ameshikou,
    HA_Sankou,
    HA_Hanamizake,
    HA_Tsukimizake,
    HA_Inoshikacho,
    HA_Akatan,
    HA_Aotan,
    HA_Tane,
    HA_Tan,
    HA_Kasu,
    HA_Syun,
    HA_Max UMETA(Hidden),
    HA_Teshi,
    HA_Kuttsuki,
};

