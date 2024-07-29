#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParam_SoundSlowFilter.h"
#include "DVPrC_SoundSlowFilter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_SoundSlowFilter : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParam_SoundSlowFilter Param;
    
    UDVPrC_SoundSlowFilter(const FObjectInitializer& ObjectInitializer);

};

