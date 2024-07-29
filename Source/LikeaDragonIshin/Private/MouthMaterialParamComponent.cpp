#include "MouthMaterialParamComponent.h"

UMouthMaterialParamComponent::UMouthMaterialParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MouthBrightness = 1.00f;
    this->MouthRoughness = 0.00f;
    this->TeethBrightness = 1.00f;
    this->TeethRoughness = 0.00f;
}

void UMouthMaterialParamComponent::SetTeethRoughness(float Value) {
}

void UMouthMaterialParamComponent::SetTeethBrightness(float Value) {
}

void UMouthMaterialParamComponent::SetMouthRoughness(float Value) {
}

void UMouthMaterialParamComponent::SetMouthBrightness(float Value) {
}


