#pragma once
#include "CoreMinimal.h"
#include "ActionSetType.h"
#include "MotionSetInfo.generated.h"

USTRUCT(BlueprintType)
struct FMotionSetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActionSetType, FName> ActionMap_;
    
    LIKEADRAGONISHIN_API FMotionSetInfo();
};

