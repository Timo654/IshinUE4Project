#pragma once
#include "CoreMinimal.h"
#include "EPokerCardMoveAction.generated.h"

UENUM(BlueprintType)
enum class EPokerCardMoveAction : uint8 {
    TargetPos,
    OpenCard,
    PlayerOpenCard,
    Select,
    SelectDiscard,
    SetRotDiscard,
    ShowDown,
};

