#include "PerlinNoiseTextureComponent.h"

UPerlinNoiseTextureComponent::UPerlinNoiseTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Octaves = 6;
    this->Persistence = 0.50f;
    this->Frequency = 1.00f;
    this->ColorMin = 0.00f;
    this->ColorMax = 1.00f;
    this->NoiseTexture = NULL;
    this->RWTexture = NULL;
}

bool UPerlinNoiseTextureComponent::IsValid() {
    return false;
}

UTextureRenderTarget2D* UPerlinNoiseTextureComponent::GetTexture() {
    return NULL;
}


