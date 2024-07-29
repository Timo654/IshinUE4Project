#pragma once
#include "CoreMinimal.h"
#include "ECHIP_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECHIP_TYPE : uint8 {
    eCHIP_TYPE_1,
    eCHIP_TYPE_25,
    eCHIP_TYPE_50,
    eCHIP_TYPE_100,
    eCHIP_TYPE_NUM,
};

