#pragma once
#include "CoreMinimal.h"
#include "UIBetWindowCloseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIBetWindowCloseDelegate, int32, betPoint);

