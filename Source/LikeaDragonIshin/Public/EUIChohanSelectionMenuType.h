#pragma once
#include "CoreMinimal.h"
#include "EUIChohanSelectionMenuType.generated.h"

UENUM(BlueprintType)
enum class EUIChohanSelectionMenuType : uint8 {
    Chohan,
    Deme_1,
    Deme_2,
    Sagake,
    SagakeRate,
    Continue,
    YesNo,
    BackButton,
};

