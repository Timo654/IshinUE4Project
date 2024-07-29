#pragma once
#include "CoreMinimal.h"
#include "EUIMMOptionMainCategoryType.generated.h"

UENUM(BlueprintType)
enum class EUIMMOptionMainCategoryType : uint8 {
    NotSet,
    Game,
    Operation,
    Graphics,
    Audio,
    Screen,
    Brightness,
    Text,
    Lanugage,
    Accessibility,
};

