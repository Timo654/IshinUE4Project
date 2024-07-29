#pragma once
#include "CoreMinimal.h"
#include "EUIMMEquipmentBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMEquipmentBfType : uint8 {
    DirtyMain,
    DirtyWeapon,
    DirtyArmor,
    DirtySelection,
    DirtySummary,
    DirtyMessage,
    DirtyButton,
    DirtyDetail,
    DirtyModelView,
    DirtyTree,
    DirtyNum,
    DirtySelectionDivPrep,
    DirtySelectionDivProc,
    DirtySelectionDivTerm,
};

