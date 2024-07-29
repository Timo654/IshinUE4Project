#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_HActInputButton.h"
#include "DVPrC_HActInputButton.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_HActInputButton : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HActInputButton Param;
    
    UDVPrC_HActInputButton(const FObjectInitializer& ObjectInitializer);

};

