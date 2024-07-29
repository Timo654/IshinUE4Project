#pragma once
#include "CoreMinimal.h"
#include "EUITitleMenuListType.generated.h"

UENUM(BlueprintType)
enum class EUITitleMenuListType : uint8 {
    BeforeGameStart,
    BeforeGameClear,
    AfterGameClear,
    TgsMenu,
    BeforeGameStartPS5,
    BeforeGameClearPS5,
    AfterGameClearPS5,
};

