#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHIMENU_DEFINE_TABLE.generated.h"

UENUM(BlueprintType)
enum class EMMTAISHIMENU_DEFINE_TABLE : uint8 {
    member_swap,
    team_swap,
    reserve_team,
    member_compose,
    specific_reinforce,
    reincarnation,
    remove_member,
    auto_skill_setting,
    top,
};

