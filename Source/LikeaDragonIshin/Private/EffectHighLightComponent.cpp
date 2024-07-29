#include "EffectHighLightComponent.h"

UEffectHighLightComponent::UEffectHighLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostProcessVolume = NULL;
    this->PostProcessMaterial = NULL;
    this->DrawBox = NULL;
    this->EdgeMaterial = NULL;
}


