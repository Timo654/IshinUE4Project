#pragma once
#include "CoreMinimal.h"
#include "EKurenaikenbuState.generated.h"

UENUM(BlueprintType)
enum class EKurenaikenbuState : uint8 {
    Boot,
    Fire,
    Hit,
};

