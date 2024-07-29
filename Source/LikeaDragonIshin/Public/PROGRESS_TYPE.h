#pragma once
#include "CoreMinimal.h"
#include "PROGRESS_TYPE.generated.h"

UENUM(BlueprintType)
enum class PROGRESS_TYPE : uint8 {
    PROGRESS_TYPE_UN_COMPLETE,
    PROGRESS_TYPE_COMPLETE,
    PROGRESS_TYPE_NUM,
};

