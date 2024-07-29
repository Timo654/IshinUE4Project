#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_HActUltimateAtkSuccess.h"
#include "DVPrC_HActUltimateAtkSuccess.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_HActUltimateAtkSuccess : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HActUltimateAtkSuccess Param;
    
    UDVPrC_HActUltimateAtkSuccess(const FObjectInitializer& ObjectInitializer);

};

