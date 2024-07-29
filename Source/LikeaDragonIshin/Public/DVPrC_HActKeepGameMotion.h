#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_HActKeepGameMotion.h"
#include "DVPrC_HActKeepGameMotion.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_HActKeepGameMotion : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HActKeepGameMotion Param;
    
    UDVPrC_HActKeepGameMotion(const FObjectInitializer& ObjectInitializer);

};

