#pragma once
#include "CoreMinimal.h"
#include "EUIMainMenuItemType.generated.h"

UENUM(BlueprintType)
enum class EUIMainMenuItemType : uint8 {
    Items,
    Equipment,
    Taishi,
    Nouryoku,
    Letter,
    Shoujin,
    AnotherLife,
    SubStory,
    Complete,
    Dictionary,
    Memorandum,
    PhotoMode,
    SaveAndSettings,
    Empty,
};

