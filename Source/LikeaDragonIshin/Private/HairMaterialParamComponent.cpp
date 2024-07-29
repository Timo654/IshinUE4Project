#include "HairMaterialParamComponent.h"

UHairMaterialParamComponent::UHairMaterialParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AO_DepthMax = -1.00f;
    this->AO_FacingAO = 0.00f;
    this->PixelDepthOffset = 0.25f;
    this->Specular = 0.30f;
    this->Brightness = 0.80f;
    this->Roughness = 0.35f;
    this->Scatter = 0.30f;
    this->RandomHueVariation = 0.10f;
    this->RandomValueVariation = 5.00f;
    this->Variation = 1.00f;
}

void UHairMaterialParamComponent::SetVariation(float Value) {
}

void UHairMaterialParamComponent::SetTipColor(FLinearColor Value) {
}

void UHairMaterialParamComponent::SetTangentB(FLinearColor Value) {
}

void UHairMaterialParamComponent::SetTangentA(FLinearColor Value) {
}

void UHairMaterialParamComponent::SetTangent(FLinearColor Value) {
}

void UHairMaterialParamComponent::SetSpecular(float Value) {
}

void UHairMaterialParamComponent::SetScatter(float Value) {
}

void UHairMaterialParamComponent::SetRoughness(float Value) {
}

void UHairMaterialParamComponent::SetRootColor(FLinearColor Value) {
}

void UHairMaterialParamComponent::SetRandomValueVariation(float Value) {
}

void UHairMaterialParamComponent::SetRandomHueVariation(float Value) {
}

void UHairMaterialParamComponent::SetPixelDepthOffset(float Value) {
}

void UHairMaterialParamComponent::SetBrightness(float Value) {
}

void UHairMaterialParamComponent::SetAO_FacingAO(float Value) {
}

void UHairMaterialParamComponent::SetAO_DepthMax(float Value) {
}


