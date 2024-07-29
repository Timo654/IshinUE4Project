#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_HActDisableSetting.h"
#include "DVPrC_HActDisableSetting.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_HActDisableSetting : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HActDisableSetting Param;
    
    UDVPrC_HActDisableSetting(const FObjectInitializer& ObjectInitializer);

};

