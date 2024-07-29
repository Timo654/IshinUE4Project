#include "SSSMaterialParamComponent.h"

USSSMaterialParamComponent::USSSMaterialParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncSSSMaterialParamComponent = NULL;
    this->SyncSSSMaterialParamComponent2 = NULL;
    this->DefaultSubsurfaceProfile = NULL;
    this->SubsurfaceProfile = NULL;
    this->Desaturation = 0.00f;
    this->GlobalAlpha = 1.00f;
    this->HueShift = 0.00f;
    this->Roughness = 1.00f;
}

void USSSMaterialParamComponent::SetTextureLightMode() {
}

void USSSMaterialParamComponent::SetSubsurfaceProfileLightMode() {
}

void USSSMaterialParamComponent::SetSubsurfaceProfile(USubsurfaceProfile* Value) {
}

void USSSMaterialParamComponent::SetRoughness(float Value) {
}

void USSSMaterialParamComponent::SetHueShift(float Value) {
}

void USSSMaterialParamComponent::SetGlobalAlpha(float Value) {
}

void USSSMaterialParamComponent::SetDesaturation(float Value) {
}


