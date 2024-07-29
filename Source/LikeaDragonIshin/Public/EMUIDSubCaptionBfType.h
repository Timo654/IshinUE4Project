#pragma once
#include "CoreMinimal.h"
#include "EMUIDSubCaptionBfType.generated.h"

UENUM(BlueprintType)
enum class EMUIDSubCaptionBfType : uint8 {
    DirtyMain,
    DirtyCheckMark,
    PlayingOpen,
    PlayingClose,
    PlayingCheckMark,
};

