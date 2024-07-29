#pragma once
#include "CoreMinimal.h"
#include "TOUGI_MENU_MENU_ITEM_KIND.generated.h"

UENUM(BlueprintType)
enum class TOUGI_MENU_MENU_ITEM_KIND : uint8 {
    TOUGI_TOP,
    TOUGI_SHOP,
    FIGHTER_INFO,
    NONE,
    NOTES,
    RETURN,
    WINNING_BATTLE,
    HUNDRED_SLASH,
    BAPTISM_ROOM,
    ORDEAL_ROOM,
    ARMS_FIGHT,
    BARE_KNOCKLE_FIGHT,
    SWORD_FIGHT,
    GUN_FIGHT,
    STRONG_FIGHT,
    ONE_SWORD,
    GUN,
    DANCE,
    GRAPPLING,
};

