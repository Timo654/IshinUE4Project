#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "UIDelegateChangeStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDelegateChangeState, EUIState, inUIState);

