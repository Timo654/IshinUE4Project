#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActScenarioFlag.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActScenarioFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString scenario_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hact_flag;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActScenarioFlag();
};

