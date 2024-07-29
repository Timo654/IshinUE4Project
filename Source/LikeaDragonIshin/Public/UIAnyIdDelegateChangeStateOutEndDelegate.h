#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateOutEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateOutEnd, int32, anyID);

