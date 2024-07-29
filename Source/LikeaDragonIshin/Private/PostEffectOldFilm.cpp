#include "PostEffectOldFilm.h"
#include "Components/PostProcessComponent.h"

APostEffectOldFilm::APostEffectOldFilm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessVolume = (UPostProcessComponent*)RootComponent;
    this->DrawMaterial = NULL;
    this->NoiseTexture = NULL;
    this->Enable = false;
    this->MaskInnerLength = 1.20f;
    this->MaskOuterLength = 1.80f;
    this->ScratchThreshold = 0.98f;
    this->DustThreshold = 0.97f;
    this->DustColorScale = 25.00f;
    this->DustSize = 2.00f;
    this->RandomBlank = 0.00f;
    this->SortPriority = 0;
}


