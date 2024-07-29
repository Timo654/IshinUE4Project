#pragma once
#include "CoreMinimal.h"
#include "EUIDataAssetType.generated.h"

UENUM(BlueprintType)
enum class EUIDataAssetType : uint8 {
    NotSet,
    ColorPreset,
    MainWidget,
    ZOrderPreset,
    UIAnimParamDefault,
    UISystemFont,
    BtlItemAvilityIcon,
    KeyTexturesId,
};

