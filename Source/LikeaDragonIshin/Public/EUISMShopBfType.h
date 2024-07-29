#pragma once
#include "CoreMinimal.h"
#include "EUISMShopBfType.generated.h"

UENUM(BlueprintType)
enum class EUISMShopBfType : uint8 {
    DirtyMain,
    DirtyMyInventory,
    DirtyShopInventory,
    DirtyMessage,
    DirtyYesNo,
    DirtyTotalPrice,
    DirtyTotalOrder,
    DirtyTab,
    DirtyBanner,
    PlayingAnimOpen,
    PlayingAnimClose,
    PlayingAnimBlink,
    VisibleMyInventoryPage,
};

