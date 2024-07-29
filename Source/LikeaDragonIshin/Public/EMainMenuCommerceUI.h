#pragma once
#include "CoreMinimal.h"
#include "EMainMenuCommerceUI.generated.h"

UENUM(BlueprintType)
enum class EMainMenuCommerceUI : uint8 {
    FadeIn_ListS,
    FadeIn_List,
    FadeIn_Shousai,
    FadeIn_back00,
    FadeIn_back01,
    FadeIn_back02,
    FadeIn_butu,
    FadeIn_scrollBar,
    FadeOut_ListS,
    FadeOut_List,
    FadeOut_Shousai,
    FadeOut_back00,
    FadeOut_back01,
    FadeOut_back02,
    FadeOut_butu,
    FadeOut_scrollBar,
    SetListAscText00,
    SetListAscText01,
    SetProperty,
    SetListItem,
    Max,
};

