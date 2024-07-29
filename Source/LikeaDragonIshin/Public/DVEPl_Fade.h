#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_Fade.generated.h"

class APostEffectFade;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_Fade : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectFade* PostEffectFade;
    
public:
    UDVEPl_Fade();

};

