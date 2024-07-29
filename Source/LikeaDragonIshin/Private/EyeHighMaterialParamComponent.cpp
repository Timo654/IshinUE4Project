#include "EyeHighMaterialParamComponent.h"

UEyeHighMaterialParamComponent::UEyeHighMaterialParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HighLightBias = 0.00f;
    this->HighLightBrightness1 = 0.00f;
    this->HighLightBrightness2 = 0.00f;
    this->HighLightBrightness3 = 0.00f;
    this->HighLightGradiation1 = 500.00f;
    this->HighLightGradiation2 = 500.00f;
    this->HighLightGradiation3 = 500.00f;
    this->IrisBRightness = 1.00f;
    this->PupileScale = 0.70f;
    this->ScleraBrightness = 1.00f;
    this->SpecularityIris = 1.00f;
    this->SpecularityScelera = 1.00f;
}

void UEyeHighMaterialParamComponent::SetSpecularityScelera(float Value) {
}

void UEyeHighMaterialParamComponent::SetSpecularityIris(float Value) {
}

void UEyeHighMaterialParamComponent::SetScleraBrightness(float Value) {
}

void UEyeHighMaterialParamComponent::SetPupileScale(float Value) {
}

void UEyeHighMaterialParamComponent::SetIrisBRightness(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightVector3(FLinearColor Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightVector2(FLinearColor Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightVector1(FLinearColor Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightGradiation3(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightGradiation2(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightGradiation1(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightColor3(FLinearColor Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightColor2(FLinearColor Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightColor1(FLinearColor Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightBrightness3(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightBrightness2(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightBrightness1(float Value) {
}

void UEyeHighMaterialParamComponent::SetHighLightBias(float Value) {
}


