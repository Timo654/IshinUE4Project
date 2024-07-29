#pragma once
#include "CoreMinimal.h"
#include "EUINPCKind.generated.h"

UENUM(BlueprintType)
enum class EUINPCKind : uint8 {
    Enemy,
    Boss,
    Friend,
    MAX,
};

