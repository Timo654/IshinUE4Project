#include "SmoothNoiseTextureComponent.h"

USmoothNoiseTextureComponent::USmoothNoiseTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeightSide = 0.25f;
    this->WeightCorner = 0.17f;
    this->SmoothStep = 8;
    this->Seed = 0;
    this->ColorMin = 0.00f;
    this->ColorMax = 1.00f;
    this->RWTexture = NULL;
}

bool USmoothNoiseTextureComponent::IsValid() {
    return false;
}

UTextureRenderTarget2D* USmoothNoiseTextureComponent::GetTexture() {
    return NULL;
}


