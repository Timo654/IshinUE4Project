#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateNormalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateNormal, int32, anyID);

