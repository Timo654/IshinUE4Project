#pragma once
#include "CoreMinimal.h"
#include "MotionSetType.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FMotionSetType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FMotionSetType();
};
FORCEINLINE uint32 GetTypeHash(const FMotionSetType) { return 0; }

