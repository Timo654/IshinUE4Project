#pragma once
#include "CoreMinimal.h"
#include "EInputConfigFileKind.generated.h"

UENUM(BlueprintType)
enum class EInputConfigFileKind : uint8 {
    SYSTEM,
    GAME,
    KEYBOARD,
    MENU,
};

