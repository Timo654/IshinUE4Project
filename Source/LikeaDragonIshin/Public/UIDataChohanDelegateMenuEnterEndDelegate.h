#pragma once
#include "CoreMinimal.h"
#include "EUIChohanSelectionMenuType.h"
#include "UIDataChohanDelegateMenuEnterEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDataChohanDelegateMenuEnterEnd, EUIChohanSelectionMenuType, menuType);

