#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIAnyIdDelegateAnimPauseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUIAnyIdDelegateAnimPause, int32, anyID, EUIAnimType, Type);

