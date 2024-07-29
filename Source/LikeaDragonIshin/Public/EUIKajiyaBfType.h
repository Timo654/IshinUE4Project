#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaBfType.generated.h"

UENUM(BlueprintType)
enum class EUIKajiyaBfType : uint8 {
    DirtyTopMenu,
    DirtyCommonBg,
    DirtyDerive,
    DirtyDeriveDetail,
    DirtySelectHammer,
    DirtyCreateResult,
    DirtyPowerShojiNum,
    DirtyPowerUpEquipChoice,
    DirtyPowerUpAbilityChoice,
    DirtyPowerUpDirecting,
    DirtyPowerUpResult,
    DirtyDisassemblyDonation,
    DirtyDisassemblyResult,
    DirtyMessage,
    DirtyHeader,
    DirtyKajiyaLevelInfo,
    DirtyModelView,
    DirtyPowerUpEquipList,
    DirtyPowerUpSelectList,
    DirtyPowerUpSelectDetail,
    DirtyDeriveSelectList,
    DirtyDeriveSelectDetail,
    DirtyDeriveDefaultInfo,
    DirtyYesNo,
};

