#pragma once
#include "CoreMinimal.h"
#include "EHanafudaCardRank.generated.h"

UENUM(BlueprintType)
enum class EHanafudaCardRank : uint8 {
    HCR_Kasu,
    HCR_Tanzaku,
    HCR_Tane,
    HCR_Kou,
    HCR_Sakazuki,
};

