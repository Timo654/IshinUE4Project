#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateReleaseStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateReleaseStart, int32, anyID);

