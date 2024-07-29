#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActChangeEndState.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActChangeEndState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 mode;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActChangeEndState();
};

