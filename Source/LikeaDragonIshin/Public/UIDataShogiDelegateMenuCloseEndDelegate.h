#pragma once
#include "CoreMinimal.h"
#include "UIDataShogiDelegateMenuCloseEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDataShogiDelegateMenuCloseEnd, bool, isYes);

