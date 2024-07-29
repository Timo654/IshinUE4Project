#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_HActChangeHandFromReactor.h"
#include "DVPrC_HActChangeHandFromReactor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_HActChangeHandFromReactor : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HActChangeHandFromReactor Param;
    
    UDVPrC_HActChangeHandFromReactor(const FObjectInitializer& ObjectInitializer);

};

