#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_HActScenarioCounter.h"
#include "DVPrC_HActScenarioCounter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_HActScenarioCounter : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HActScenarioCounter Param;
    
    UDVPrC_HActScenarioCounter(const FObjectInitializer& ObjectInitializer);

};

