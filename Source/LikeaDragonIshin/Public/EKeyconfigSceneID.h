#pragma once
#include "CoreMinimal.h"
#include "EKeyconfigSceneID.generated.h"

UENUM(BlueprintType)
enum class EKeyconfigSceneID : uint8 {
    SYSTEM,
    ADV,
    BTL,
    TAIHOU,
    KARAOKE,
    NICHIBU,
    DRINKING,
    JANGKENG,
    SEXYPHASE,
    FUKUBIKI,
    UDON,
    KYOUKEI,
    TINTIRO,
    CHOHAN,
    OICHOKABU,
    KOIKOI,
    POKER,
    MAHJONG,
    SHOGI,
    MAKIWARI,
    FISHING,
    COOKING,
    CHASE,
    TAISHI_SKILL,
    MENU_CONSTANT,
    TAISHI_SKILL_FIXED,
    DEF_MAX UMETA(Hidden),
    DUMMY,
    RETAIL_MENU_MAX = TAISHI_SKILL UMETA(Hidden),
    SYSTEM_DATA_MAX = 30 UMETA(Hidden),
    AUTO_SELECT = 255,
};

