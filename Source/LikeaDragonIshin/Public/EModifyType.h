#pragma once
#include "CoreMinimal.h"
#include "EModifyType.generated.h"

UENUM(BlueprintType)
enum class EModifyType : uint8 {
    DISABLE_LOOK,
    ADD_NECK_BLEND,
    CLOSE_EYES,
    DISABLE_HAND,
    SYNC_HAND_IK_L,
    SYNC_HAND_IK_R,
    DISABLE_FOOT,
    INVISIBLE_WEAPON,
    DISABLE_FOOTSOUND,
    MaxCount,
};

