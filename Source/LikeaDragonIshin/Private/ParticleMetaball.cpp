#include "ParticleMetaball.h"

AParticleMetaball::AParticleMetaball(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NiagaraComponent = NULL;
}

UNiagaraComponent* AParticleMetaball::GetNiagaraComponent() {
    return NULL;
}


