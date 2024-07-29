#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateStayDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateStay, int32, anyID);

