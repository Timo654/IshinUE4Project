#pragma once
#include "CoreMinimal.h"
#include "BattleActionCameraId.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FBattleActionCameraId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    FBattleActionCameraId();
};

