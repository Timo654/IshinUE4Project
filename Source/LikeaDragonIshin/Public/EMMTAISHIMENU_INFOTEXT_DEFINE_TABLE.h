#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHIMENU_INFOTEXT_DEFINE_TABLE.generated.h"

UENUM(BlueprintType)
enum class EMMTAISHIMENU_INFOTEXT_DEFINE_TABLE : uint8 {
    swap_origin_selection,
    swap_target_selection,
    swap_team_origin_selection,
    swap_team_target_selection,
    compose_target_selection,
    compose_material_selection,
    reinforce_target_selection,
    reincarnation_target_selection,
    remove_target_selection,
    autoskill_setting_selection,
};

