#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActHeat.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActHeat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 heat;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActHeat();
};

