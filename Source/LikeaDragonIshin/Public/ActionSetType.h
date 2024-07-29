#pragma once
#include "CoreMinimal.h"
#include "ActionSetType.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FActionSetType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FActionSetType();
};
FORCEINLINE uint32 GetTypeHash(const FActionSetType) { return 0; }

