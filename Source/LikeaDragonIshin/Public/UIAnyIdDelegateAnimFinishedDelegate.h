#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIAnyIdDelegateAnimFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUIAnyIdDelegateAnimFinished, int32, anyID, EUIAnimType, Type);

