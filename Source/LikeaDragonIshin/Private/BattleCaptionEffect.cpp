#include "BattleCaptionEffect.h"

ABattleCaptionEffect::ABattleCaptionEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NiagaraComponent = NULL;
}

void ABattleCaptionEffect::SetEffectActive(bool flag) {
}

void ABattleCaptionEffect::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}

bool ABattleCaptionEffect::IsFinish() {
    return false;
}


