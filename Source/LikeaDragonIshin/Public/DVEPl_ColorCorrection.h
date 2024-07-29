#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_ColorCorrection.generated.h"

class APostEffectColorCorrecction;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_ColorCorrection : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectColorCorrecction* PostEffectColorCorrecction;
    
public:
    UDVEPl_ColorCorrection();

};

