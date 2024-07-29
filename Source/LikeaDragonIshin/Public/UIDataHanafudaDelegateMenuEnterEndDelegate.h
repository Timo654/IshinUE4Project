#pragma once
#include "CoreMinimal.h"
#include "EHanafudaMenuType.h"
#include "UIDataHanafudaDelegateMenuEnterEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDataHanafudaDelegateMenuEnterEnd, EHanafudaMenuType, menuType);

