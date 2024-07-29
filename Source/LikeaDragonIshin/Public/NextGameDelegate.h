#pragma once
#include "CoreMinimal.h"
#include "NextGameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNextGame, bool, isContinue);

