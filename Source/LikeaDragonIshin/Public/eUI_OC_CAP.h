#pragma once
#include "CoreMinimal.h"
#include "eUI_OC_CAP.generated.h"

UENUM(BlueprintType)
enum class eUI_OC_CAP : uint8 {
    eUI_OC_BLACK,
    eUI_OC_ADV_CAP_S,
    eUI_OC_ADV_CAP_L,
    eUI_OC_DAIMON,
    eUI_OC_EFF,
    eUI_OC_EFF_BOSS,
    eUI_OC_FLASH,
    eUI_OC_KYUKYOKU,
    eUI_OC_LB,
    eUI_OC_SB_L,
    eUI_OC_SB_L2,
    eUI_OC_SB_M,
    eUI_OC_SB_S,
    eUI_OC_EB_S,
    eUI_OC_SB_HACT,
    eUI_OC_NUM,
    eUI_OC_INVALID = eUI_OC_NUM,
};

