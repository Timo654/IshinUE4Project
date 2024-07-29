#pragma once
#include "CoreMinimal.h"
#include "EUICategory.generated.h"

UENUM(BlueprintType)
enum class EUICategory : uint8 {
    NotSet,
    Adv,
    Btl,
    Mg,
    Cmn,
    Sys,
    TitleMenu,
    MainMenu,
    Advertise,
    Text,
    Pic,
    Other,
};

