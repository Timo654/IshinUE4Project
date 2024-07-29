#pragma once
#include "CoreMinimal.h"
#include "BombInfoID.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FBombInfoID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FBombInfoID();
};

