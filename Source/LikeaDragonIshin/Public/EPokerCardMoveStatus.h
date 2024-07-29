#pragma once
#include "CoreMinimal.h"
#include "EPokerCardMoveStatus.generated.h"

UENUM(BlueprintType)
enum class EPokerCardMoveStatus : uint8 {
    FOR_TARGEPOS,
    ROTEX,
    ROTEZ,
    SET_ROT_DISCARD,
    MAX,
};

