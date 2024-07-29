#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateOnDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateOn, int32, anyID);

