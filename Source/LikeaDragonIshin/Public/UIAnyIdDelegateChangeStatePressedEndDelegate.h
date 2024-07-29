#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStatePressedEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStatePressedEnd, int32, anyID);

