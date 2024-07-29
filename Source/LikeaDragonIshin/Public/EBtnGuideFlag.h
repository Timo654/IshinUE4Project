#pragma once
#include "CoreMinimal.h"
#include "EBtnGuideFlag.generated.h"

UENUM(BlueprintType)
enum class EBtnGuideFlag : uint8 {
    Nothing,
    FirstPage,
    LastPage,
    FirstContent,
    LastContent,
};

