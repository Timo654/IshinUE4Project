#pragma once
#include "CoreMinimal.h"
#include "EPokerPlayerActionCommand.generated.h"

UENUM(BlueprintType)
enum class EPokerPlayerActionCommand : uint8 {
    EPokerPlayerActionCommand_Bet,
    EPokerPlayerActionCommand_Raise,
    EPokerPlayerActionCommand_Call,
    EPokerPlayerActionCommand_Check,
    EPokerPlayerActionCommand_Falld,
    EPokerPlayerActionCommand_num_,
};

