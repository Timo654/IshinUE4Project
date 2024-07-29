#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_Gradation.generated.h"

class APostEffectGradation;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_Gradation : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectGradation* PostEffectGradation1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectGradation* PostEffectGradation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectGradation* PostEffectGradation3;
    
public:
    UDVEPl_Gradation();

};

