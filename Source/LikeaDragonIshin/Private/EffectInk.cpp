#include "EffectInk.h"
#include "CopySceneTextureComponent.h"
#include "EffectInkTextureComponent.h"

AEffectInk::AEffectInk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectInkTexture = CreateDefaultSubobject<UEffectInkTextureComponent>(TEXT("EffectInkTexture"));
    this->CopySceneTexture = CreateDefaultSubobject<UCopySceneTextureComponent>(TEXT("CopySceneTexture"));
}

void AEffectInk::SetZoomUVOffset(float zoom_uv_ofs) {
}

void AEffectInk::SetOneShot() {
}

void AEffectInk::SetAlpha(float Alpha) {
}

UTextureRenderTarget2D* AEffectInk::GetTexture() {
    return NULL;
}


