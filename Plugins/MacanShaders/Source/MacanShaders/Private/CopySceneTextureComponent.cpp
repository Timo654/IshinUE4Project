#include "CopySceneTextureComponent.h"

UCopySceneTextureComponent::UCopySceneTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderTexture = NULL;
}

void UCopySceneTextureComponent::SetTexture(UTextureRenderTarget2D* Texture) {
}

bool UCopySceneTextureComponent::IsPrepared() {
    return false;
}

UTextureRenderTarget2D* UCopySceneTextureComponent::GetTexture() {
    return NULL;
}


