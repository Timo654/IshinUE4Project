#include "StageNearFadeComponent.h"

UStageNearFadeComponent::UStageNearFadeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeScreenSize = 1.00f;
    this->StaticMesh = NULL;
    this->GlobalAlpha = NULL;
    this->bActorMode = false;
}


