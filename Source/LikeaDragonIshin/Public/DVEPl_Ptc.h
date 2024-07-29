#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_Ptc.generated.h"

class ADevil2Human;
class AParticle;
class UNiagaraComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_Ptc : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AParticle* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* ParentHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_pre_play_instance;
    
public:
    UDVEPl_Ptc();

};

