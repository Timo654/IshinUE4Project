#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_EffectInk.generated.h"

class AEffectInk;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_EffectInk : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEffectInk* EffectInk;
    
public:
    UDVEPl_EffectInk();

};

