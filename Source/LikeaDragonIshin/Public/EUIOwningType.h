#pragma once
#include "CoreMinimal.h"
#include "EUIOwningType.generated.h"

UENUM(BlueprintType)
enum class EUIOwningType : uint8 {
    NotSet,
    UWidget,
    UWidgetTree,
    APlayerController,
    UGameInstance,
    UWorld,
};

