#pragma once
#include "CoreMinimal.h"
#include "EOichokabuGameState.generated.h"

UENUM(BlueprintType)
enum class EOichokabuGameState : uint8 {
    OGS_Innitialize,
    OGS_Description,
    OGS_FirstStartSelect,
    OGS_RuleSelect,
    OGS_RuleMekuriFirst,
    OGS_DealCard,
    OGS_FirstPlayerBet,
    OGS_SecondPlayerBet,
    OGS_ThirdPlayerBet,
    OGS_ParentPlayerBet,
    OGS_FirstPlacePhase,
    OGS_SecondPlacePhase,
    OGS_ThirdPlacePhase,
    OGS_FourthPlacePhase,
    OGS_ParentPlacePhase,
    OGS_PlayerSelectAction,
    OGS_TwoCardsDuel,
    OGS_ThreeCardsDuel,
    OGS_PlayerSpecialHandsDuel,
    OGS_Replay,
    OGS_Finish,
    OGS_Hasan,
    OGS_RuleMekuri,
};

