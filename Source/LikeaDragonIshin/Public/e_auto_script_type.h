#pragma once
#include "CoreMinimal.h"
#include "e_auto_script_type.generated.h"

UENUM()
enum class e_auto_script_type : uint32 {
    nop,
    pad,
    get_player_pos_r,
    screen_capture,
    debug_print,
    error_msg,
    send_log,
    send_complete,
    is_battle,
    is_minigame,
    is_ui_focus,
    get_current_main_scenario_id,
    get_current_main_scenario_name,
    test,
    dip_set,
    dip_check,
    get_money,
    get_revision_number,
    get_game_lap_num,
    is_the_decision_cross,
    get_languange_identifier,
    get_build_target,
    get_game_engine,
    is_sub_story_completed,
    max,
};

