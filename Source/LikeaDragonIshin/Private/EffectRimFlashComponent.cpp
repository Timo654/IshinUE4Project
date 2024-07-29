#include "EffectRimFlashComponent.h"

UEffectRimFlashComponent::UEffectRimFlashComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Fresnel_Exponent = 5.00f;
    this->Fresnel_ReflectFraction = 0.04f;
    this->Enable = false;
}

void UEffectRimFlashComponent::SetPosition(ERimFlashPosition position, float Value) {
}

void UEffectRimFlashComponent::RemovePosition(ERimFlashPosition position, UObject* Parent) {
}

void UEffectRimFlashComponent::AddPosition(ERimFlashPosition position, UObject* Parent) {
}


