#pragma once
#include "CoreMinimal.h"
#include "EHandPatternMotionType.generated.h"

UENUM(BlueprintType)
enum class EHandPatternMotionType : uint8 {
    invalid,
    Hand_parts_0_Neutral,
    Hand_parts_1_Gu,
    Hand_parts_2_Katana,
    Hand_parts_3_Hako,
    Hand_parts_4_taiken,
    Hand_parts_5_bou,
    Hand_parts_6_shotgun,
    Hand_parts_7_gun,
    Hand_parts_8_tonfa,
    Hand_parts_9_hand_max UMETA(Hidden),
    Hand_parts_10_hand_middle,
    Hand_parts_11_hand_middle2,
    Hand_parts_12_hand_min,
    Hand_parts_13_hand_tabaco_F,
    Hand_parts_14_model2army,
    Hand_parts_15_hand_max2,
    Hand_parts_16_F_shp01,
    Num,
};

