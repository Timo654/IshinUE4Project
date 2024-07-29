#include "MouthBrightnessComponent.h"

UMouthBrightnessComponent::UMouthBrightnessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->OldMaterial = NULL;
    this->Material = NULL;
}


