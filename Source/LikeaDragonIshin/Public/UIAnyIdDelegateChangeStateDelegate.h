#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "UIAnyIdDelegateChangeStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUIAnyIdDelegateChangeState, int32, anyID, EUIState, inUIState);

