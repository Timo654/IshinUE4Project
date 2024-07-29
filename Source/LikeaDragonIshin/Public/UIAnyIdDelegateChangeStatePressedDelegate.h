#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStatePressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStatePressed, int32, anyID);

