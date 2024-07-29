#pragma once
#include "CoreMinimal.h"
#include "EUIChohanSelectionMenuType.h"
#include "UIDataChohanDelegateMenuCloseEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDataChohanDelegateMenuCloseEnd, EUIChohanSelectionMenuType, menuType);

