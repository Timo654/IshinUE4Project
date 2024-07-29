#pragma once
#include "CoreMinimal.h"
#include "DuelPlayerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDuelPlayer, int32, Player);

