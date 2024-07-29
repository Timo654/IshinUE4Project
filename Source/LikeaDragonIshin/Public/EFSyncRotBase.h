#pragma once
#include "CoreMinimal.h"
#include "EFSyncRotBase.generated.h"

UENUM(BlueprintType)
enum class EFSyncRotBase : uint8 {
    OWN,
    OWN_ORG,
    BASE,
    MAX,
};

