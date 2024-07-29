#pragma once
#include "CoreMinimal.h"
#include "EUIMMMainTougVSBfType.generated.h"

UENUM(BlueprintType)
enum class EUIMMMainTougVSBfType : uint8 {
    DirtySetInfo,
    DirtyFadeInMyName,
    DirtyFadeOutMyName,
    DirtyFadeInOpponentName,
    DirtyFadeOutOpponentName,
    DirtyFadeInBtlStart,
    DirtyFadeOutBtlStart,
    DirtyFadeOutNameImmediate,
    DirtyFadeInClear,
    DirtyFadeOutClear,
};

