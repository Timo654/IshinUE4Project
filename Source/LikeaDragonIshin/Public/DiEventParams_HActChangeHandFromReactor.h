#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActChangeHandFromReactor.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActChangeHandFromReactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActChangeHandFromReactor();
};

