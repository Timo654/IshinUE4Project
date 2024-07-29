#include "EyeHighlightComponent.h"

UEyeHighlightComponent::UEyeHighlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ParentMesh = NULL;
    this->Material = NULL;
}


