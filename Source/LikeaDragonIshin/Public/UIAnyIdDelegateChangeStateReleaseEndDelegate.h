#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateReleaseEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateReleaseEnd, int32, anyID);

