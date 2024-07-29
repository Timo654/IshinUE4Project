#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIDelegateAnimStopDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDelegateAnimStop, EUIAnimType, Type);

