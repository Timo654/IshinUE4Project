#include "EffectInkTextureComponent.h"

UEffectInkTextureComponent::UEffectInkTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ToneTexture = NULL;
    this->InkTexture = NULL;
    this->NoiseTexture = NULL;
}

bool UEffectInkTextureComponent::IsPrepared() {
    return false;
}

UTextureRenderTarget2D* UEffectInkTextureComponent::GetToneTexture() {
    return NULL;
}

UTextureRenderTarget2D* UEffectInkTextureComponent::GetInkTexture() {
    return NULL;
}


