#pragma once
#include "CoreMinimal.h"
#include "ECharacterState.generated.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8 {
    Stand,
    DownF,
    DownB,
    Sway,
    Standup,
    MaxCount,
};

