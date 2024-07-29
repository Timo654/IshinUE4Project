#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIDelegateAnimPlayDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDelegateAnimPlay, EUIAnimType, Type);

