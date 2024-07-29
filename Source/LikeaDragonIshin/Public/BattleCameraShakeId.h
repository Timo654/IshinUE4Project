#pragma once
#include "CoreMinimal.h"
#include "BattleCameraShakeId.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FBattleCameraShakeId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    FBattleCameraShakeId();
};

