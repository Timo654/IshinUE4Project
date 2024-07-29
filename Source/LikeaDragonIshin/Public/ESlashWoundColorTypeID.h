#pragma once
#include "CoreMinimal.h"
#include "ESlashWoundColorTypeID.generated.h"

UENUM(BlueprintType)
enum class ESlashWoundColorTypeID : uint8 {
    COLORTYPE_DIRECT,
    COLORTYPE_SLASH,
    COLORTYPE_GUNSHOT,
    Num,
};

