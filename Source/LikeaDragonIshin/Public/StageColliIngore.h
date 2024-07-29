#pragma once
#include "CoreMinimal.h"
#include "StageColliIngore.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStageColliIngore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> list;
    
    LIKEADRAGONISHIN_API FStageColliIngore();
};

