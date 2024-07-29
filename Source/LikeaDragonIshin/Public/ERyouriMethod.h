#pragma once
#include "CoreMinimal.h"
#include "ERyouriMethod.generated.h"

UENUM(BlueprintType)
enum class ERyouriMethod : uint8 {
    eRyouri_Method_Cut,
    eRyouri_Method_Burn,
    eRyouri_Method_Heat,
    eRyouri_Method_season,
};

