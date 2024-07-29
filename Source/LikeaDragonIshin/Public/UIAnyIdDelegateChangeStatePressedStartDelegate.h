#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStatePressedStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStatePressedStart, int32, anyID);

