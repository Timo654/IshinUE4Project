#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIAnyIdDelegateAnimPlayDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUIAnyIdDelegateAnimPlay, int32, anyID, EUIAnimType, Type);

