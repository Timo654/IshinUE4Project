#pragma once
#include "CoreMinimal.h"
#include "EUIMainMenuKyoukaBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMainMenuKyoukaBfType : uint8 {
    DirtyBg,
    DirtyTopMenu,
    DirtyInfoRt,
    DirtySetumeiP,
    DirtyInfoRbP,
    DirtySetumei,
    DirtyInfoRb,
    DirtyDiskSelector,
    DirtyDiskSude,
    DirtyDiskSword,
    DirtyDiskGun,
    DirtyDiskRanbu,
    DirtySoulCuror,
    DirtyButtonKirikae,
    DirtyAbilityLevelUp,
    DirtyConfirmMenuCategory,
    DirtyConfirmMenuAbility,
    DirtyGroupCommon,
    DirtyGroupTopMenu,
    DirtyGroupEditing,
    DirtyGroupConfirm,
};

