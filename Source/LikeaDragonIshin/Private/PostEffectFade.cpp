#include "PostEffectFade.h"
#include "Components/PostProcessComponent.h"

APostEffectFade::APostEffectFade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessVolume = (UPostProcessComponent*)RootComponent;
    this->DrawMaterial = NULL;
    this->Enable = false;
}


