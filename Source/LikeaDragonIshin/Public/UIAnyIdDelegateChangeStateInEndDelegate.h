#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateInEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateInEnd, int32, anyID);

