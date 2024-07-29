#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActScenarioCounter.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActScenarioCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString scenario_counter_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 counter;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActScenarioCounter();
};

