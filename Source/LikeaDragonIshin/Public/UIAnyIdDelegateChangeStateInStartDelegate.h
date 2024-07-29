#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateInStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateInStart, int32, anyID);

