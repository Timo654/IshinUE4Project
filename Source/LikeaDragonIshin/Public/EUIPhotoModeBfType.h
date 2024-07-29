#pragma once
#include "CoreMinimal.h"
#include "EUIPhotoModeBfType.generated.h"

UENUM(BlueprintType)
enum class EUIPhotoModeBfType : uint8 {
    DirtyMain,
    DirtyWindow,
    DirtyTab,
    DirtyStampList,
    DirtyStampDeploy,
    DirtySliderOrFilter,
    DirtyButtonInfo,
    DirtyUIVisibility,
    Opening,
    Closing,
    Blinking,
};

