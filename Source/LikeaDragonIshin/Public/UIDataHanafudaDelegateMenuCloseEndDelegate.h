#pragma once
#include "CoreMinimal.h"
#include "EHanafudaMenuType.h"
#include "UIDataHanafudaDelegateMenuCloseEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDataHanafudaDelegateMenuCloseEnd, EHanafudaMenuType, menuType);

