#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIDelegateAnimPauseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDelegateAnimPause, EUIAnimType, Type);

