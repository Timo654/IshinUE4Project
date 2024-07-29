#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeStateFocusedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeStateFocused, int32, anyID);

