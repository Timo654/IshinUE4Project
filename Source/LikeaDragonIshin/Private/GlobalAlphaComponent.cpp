#include "GlobalAlphaComponent.h"

UGlobalAlphaComponent::UGlobalAlphaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->GlobalAlpha = 1.00f;
}


