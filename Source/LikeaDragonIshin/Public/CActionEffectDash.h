#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionEffectDash.generated.h"

class AParticle;
class UEffectDashUpdateComponent;

UCLASS(Blueprintable)
class UCActionEffectDash : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AParticle* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectDashUpdateComponent* EffectUpdate;
    
public:
    UCActionEffectDash();

};

