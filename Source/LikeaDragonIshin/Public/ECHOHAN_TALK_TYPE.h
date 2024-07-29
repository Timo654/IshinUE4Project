#pragma once
#include "CoreMinimal.h"
#include "ECHOHAN_TALK_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECHOHAN_TALK_TYPE : uint8 {
    eTYPE_NORMAL,
    eTYPE_SASHI,
    eTYPE_MODE_OPEN,
    eTYPE_CHOHAN,
    eTYPE_SYSTEM,
    eTYPE_TUTORIAL,
    eTYPE_CHOHAN_KIRYU,
    eTYPE_CHOHAN_AKIYAMA,
    eTYPE_CHOHAN_SAEJIMA,
    eTYPE_CHOHAN_SHINADA,
    eTYPE_EX_HARUKA,
};

