#pragma once
#include "CoreMinimal.h"
#include "EUIResultNecessaryOrUnnecessary.generated.h"

UENUM(BlueprintType)
enum class EUIResultNecessaryOrUnnecessary : uint8 {
    Necessary,
    Unnecessary,
};

