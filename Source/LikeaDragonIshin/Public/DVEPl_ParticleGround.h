#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_ParticleGround.generated.h"

class UEffectParticleGroundComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_ParticleGround : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectParticleGroundComponent* ParticleGround;
    
public:
    UDVEPl_ParticleGround();

};

