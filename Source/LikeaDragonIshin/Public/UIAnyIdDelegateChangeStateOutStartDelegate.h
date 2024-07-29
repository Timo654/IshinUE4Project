#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateOutStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateOutStart, int32, anyID);

