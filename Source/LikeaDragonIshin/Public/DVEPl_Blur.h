#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_Blur.generated.h"

class APostEffectDollyBlur;
class APostEffectPanBlur;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_Blur : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectPanBlur* PostEffectPanBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectDollyBlur* PostEffectDollyBlur;
    
public:
    UDVEPl_Blur();

};

