#pragma once
#include "CoreMinimal.h"
#include "ChangeDepthDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeDepth, float, Value);

