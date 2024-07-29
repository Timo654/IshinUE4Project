#include "EffectBodyDamageComponent.h"

UEffectBodyDamageComponent::UEffectBodyDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enable = false;
    this->Material = NULL;
}

void UEffectBodyDamageComponent::SetPosition(EBodyDamagePosition position, float Value) {
}


