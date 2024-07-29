#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_ColorCorrection.h"
#include "DVPrC_ColorCorrection.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_ColorCorrection : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_ColorCorrection Param;
    
    UDVPrC_ColorCorrection(const FObjectInitializer& ObjectInitializer);

};

