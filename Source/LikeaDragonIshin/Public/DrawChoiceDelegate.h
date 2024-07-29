#pragma once
#include "CoreMinimal.h"
#include "EOichokabuDrawChoices.h"
#include "DrawChoiceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDrawChoice, EOichokabuDrawChoices, isDraw);

