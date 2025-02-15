#pragma once
#include "CoreMinimal.h"
#include "EPokerUI.generated.h"

UENUM(BlueprintType)
enum class EPokerUI : uint8 {
    PlayerPlateIn,
    PlayerPlateOut,
    PlayerName,
    CPUName1,
    CPUName2,
    CPUName3,
    PlayerChip,
    NonPlayer1Chip,
    NonPlayer2Chip,
    NonPlayer3Chip,
    PlayerBet,
    NonPlayer1Bet,
    NonPlayer2Bet,
    NonPlayer3Bet,
    PlayerTotalBet,
    NonPlayer1TotalBet,
    NonPlayer2TotalBet,
    NonPlayer3TotalBet,
    ActionSelectionOpen,
    ActionSelectionCursolUpdate,
    ActionSelectionDecide,
    PlayerSelectedActionIn,
    PlayerSelectedActionOut,
    NonPlayer1SelectedActionIn,
    NonPlayer2SelectedActionIn,
    NonPlayer3SelectedActionIn,
    NonPlayer1SelectedActionOut,
    NonPlayer2SelectedActionOut,
    NonPlayer3SelectedActionOut,
    FoldSelectedOut,
    ShowDown,
    EndRound,
    StructureAndRoundIn,
    StructureAndRoundOut,
    RoundUpdate,
    AddChip,
    SetChip,
    CoundDownChip,
    ResetChip,
    PlayResultAnim,
    NonPlayerMessage1,
    NonPlayerMessage2,
    NonPlayerMessage3,
    ContinueChoiceOpen,
    ContinueChoiceUpdate,
    ContinueChoiceDecide,
    SetDealer,
    Structure,
    SetSeat,
    OpenSankaku,
    DecideSankaku,
    UpdateSankakuCursol,
    Max,
};

