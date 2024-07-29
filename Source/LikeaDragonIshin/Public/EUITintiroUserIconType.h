#pragma once
#include "CoreMinimal.h"
#include "EUITintiroUserIconType.generated.h"

UENUM(BlueprintType)
enum class EUITintiroUserIconType : uint8 {
    None,
    Parent,
    Child,
    Win,
    Lose,
    Even,
};

