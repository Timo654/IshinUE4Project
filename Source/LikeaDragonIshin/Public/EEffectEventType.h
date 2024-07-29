#pragma once
#include "CoreMinimal.h"
#include "EEffectEventType.generated.h"

UENUM(BlueprintType)
enum class EEffectEventType : uint8 {
    invalid,
    chohan01,
    chohan02,
    Skill_final_maximam,
    Item_migawariishi,
    dv2_chase_en,
    dv2_chase_lp,
    dv2_chase_st,
    dv2_kajiyaMGbgseq01lp,
    dv2_kajiyaMGbgseq01st,
    dv2_kajiyaMGbgseq02lp,
    dv2_kajiyaMGbgseq02st,
    dv2_kajiyaMGbgseq03lp,
    dv2_kajiyaMGbgseq03st,
    dv2_kajiyaMGbgseq04Fin,
    dv2_janken,
    dv2_mg_makiwariSuccess,
    dv2_ti_lowVisibility,
    damege_flash,
    heatstart_devil,
    screen_common01,
    screen_common02,
    screen_common03,
    screen_common04,
    screen_common05,
    screen_common06,
    screen_common07,
    screen_common08,
    screen_common09,
    screen_common10,
    st_kyoto_karasu01,
    st_tosaTaihou,
    hitstop_screen,
    dv2_z2g_gun_hit,
    dv2_swordBoost,
    Num,
};

