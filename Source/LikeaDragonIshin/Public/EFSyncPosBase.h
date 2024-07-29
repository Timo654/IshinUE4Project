#pragma once
#include "CoreMinimal.h"
#include "EFSyncPosBase.generated.h"

UENUM(BlueprintType)
enum class EFSyncPosBase : uint8 {
    OWN,
    OWN_ORG,
    BASE,
    MAX,
};

