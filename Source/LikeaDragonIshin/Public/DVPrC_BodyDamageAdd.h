#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_BodyDamageAdd.h"
#include "DVPrC_BodyDamageAdd.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_BodyDamageAdd : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_BodyDamageAdd Param;
    
    UDVPrC_BodyDamageAdd(const FObjectInitializer& ObjectInitializer);

};

