#include "PostEffectCrossFade.h"
#include "Components/PostProcessComponent.h"

APostEffectCrossFade::APostEffectCrossFade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessVolume = (UPostProcessComponent*)RootComponent;
    this->DrawMaterial = NULL;
    this->ColorTexture = NULL;
    this->Alpha = 0.00f;
    this->ZoomScale = 1.00f;
    this->Enable = false;
    this->SortPriority = 0;
}


