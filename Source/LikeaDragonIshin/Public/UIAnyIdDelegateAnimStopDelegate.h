#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIAnyIdDelegateAnimStopDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUIAnyIdDelegateAnimStop, int32, anyID, EUIAnimType, Type);

