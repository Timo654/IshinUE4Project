#pragma once
#include "CoreMinimal.h"
#include "ECharaArcFileType.generated.h"

UENUM(BlueprintType)
enum class ECharaArcFileType : uint8 {
    None,
    Texture,
    Face,
    Hair,
    Tops,
    Adv,
};

