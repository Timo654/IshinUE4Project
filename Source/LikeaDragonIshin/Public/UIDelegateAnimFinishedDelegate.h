#pragma once
#include "CoreMinimal.h"
#include "EUIAnimType.h"
#include "UIDelegateAnimFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIDelegateAnimFinished, EUIAnimType, Type);

