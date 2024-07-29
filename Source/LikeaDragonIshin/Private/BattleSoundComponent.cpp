#include "BattleSoundComponent.h"

UBattleSoundComponent::UBattleSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerFighter = NULL;
}

UCueObject* UBattleSoundComponent::PrepareAndPlayVoice(USoundAtomCue* Cue, bool ignore_pos) {
    return NULL;
}


