#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_DrawOff.h"
#include "DVPrC_DrawOff.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_DrawOff : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_DrawOff Param;
    
    UDVPrC_DrawOff(const FObjectInitializer& ObjectInitializer);

};

