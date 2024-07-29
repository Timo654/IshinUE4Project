#pragma once
#include "CoreMinimal.h"
#include "UIAnyIdDelegateChangeValidDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIAnyIdDelegateChangeValid, int32, anyID);

