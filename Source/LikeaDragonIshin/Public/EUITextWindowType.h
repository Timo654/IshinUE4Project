#pragma once
#include "CoreMinimal.h"
#include "EUITextWindowType.generated.h"

UENUM(BlueprintType)
enum class EUITextWindowType : uint8 {
    Text,
    Image,
    YesNo,
    Toku,
};

