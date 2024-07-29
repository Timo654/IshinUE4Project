#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHIMENU_INSERTION_WIDGET_ITEM.generated.h"

UENUM(BlueprintType)
enum class EMMTAISHIMENU_INSERTION_WIDGET_ITEM : uint8 {
    top_menu,
    top_info,
    team_assign,
    team_organize,
    member_list,
    auto_skill_list,
    member_sort,
    member_info,
    compose_btn,
    compose_confirm_bg,
    compose_confirm_info,
    compose_confirm_window,
    elem_btn,
    compose_perform,
    specific_reinforce_bg,
    specific_reinforce_weapon_list,
    specific_reinforce_weapon_info,
    specific_reinforce_perform,
    reincarnation_confirm,
    reincarnation_perform,
    yesno_window,
    life_gauge,
    max,
};

