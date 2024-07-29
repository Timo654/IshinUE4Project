#pragma once
#include "CoreMinimal.h"
#include "EMainMenuRyouriUI.generated.h"

UENUM(BlueprintType)
enum class EMainMenuRyouriUI : uint8 {
    FadeIn_Back00,
    FadeIn_Back01,
    FadeIn_ScrollBar,
    FadeIn_IconNew,
    FadeIn_Sentaku,
    FadeIn_Back02,
    FadeIn_Shokuzai,
    FadeIn_Sentaku1,
    FadeIn_ColList,
    FadeIn_List,
    FadeIn_HarukaWindow,
    FadeOut_Back00,
    FadeOut_Back01,
    FadeOut_ScrollBar,
    FadeOut_IconNew,
    FadeOut_Sentaku,
    FadeOut_Back02,
    FadeOut_Shokuzai,
    FadeOut_Sentaku1,
    FadeOut_ColList,
    FadeOut_List,
    FadeOut_HarukaWindow,
    UpdateRyouriListIndex,
    UpdateRyouriListEntry,
    UpdateDetail,
    UpdateDetailShokuzai,
    UpdateHarukaText,
    ListScrollUpdate_Wheel,
    Max,
};

