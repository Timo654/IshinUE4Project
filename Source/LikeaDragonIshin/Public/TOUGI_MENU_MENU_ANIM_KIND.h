#pragma once
#include "CoreMinimal.h"
#include "TOUGI_MENU_MENU_ANIM_KIND.generated.h"

UENUM(BlueprintType)
enum class TOUGI_MENU_MENU_ANIM_KIND : uint8 {
    DISABLE_FOCUSED,
    DISABLE,
    DECIDE,
    FOCUSED,
    NORMAL,
};

