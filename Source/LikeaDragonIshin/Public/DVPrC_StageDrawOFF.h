#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_StageDrawOFF.h"
#include "DVPrC_StageDrawOFF.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_StageDrawOFF : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_StageDrawOFF Param;
    
    UDVPrC_StageDrawOFF(const FObjectInitializer& ObjectInitializer);

};

