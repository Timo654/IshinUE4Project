#pragma once
#include "CoreMinimal.h"
#include "TaishiCardListId.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FTaishiCardListId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    FTaishiCardListId();
};
FORCEINLINE uint32 GetTypeHash(const FTaishiCardListId) { return 0; }

