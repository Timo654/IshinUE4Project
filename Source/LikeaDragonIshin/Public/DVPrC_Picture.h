#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_Picture.h"
#include "DVPrC_Picture.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_Picture : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_Picture Param;
    
    UDVPrC_Picture(const FObjectInitializer& ObjectInitializer);

};

