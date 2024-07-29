#pragma once
#include "CoreMinimal.h"
#include "ECommerceUI.generated.h"

UENUM(BlueprintType)
enum class ECommerceUI : uint8 {
    UpdateList,
    UpdateListItemShowHide,
    UpdateProperty,
    SetActiveNouhinCursol,
    SetBack02IconZResult,
    SetBack02bk15ZResult,
    UpdateResult,
    FadeInKekka,
    UpdateHandOverDelivered,
    UpdateHandOver,
    UpdateHandOverCursol,
    PrintDeliveredItem,
    ShowBase,
    ShowOrderSelect,
    ShowOrderProperty,
    ShowOrderHandOver,
    ShowResult,
    ShowCanselWindow,
    ChangeCancelWindow,
    DecideCancelWindow,
    Max,
};

