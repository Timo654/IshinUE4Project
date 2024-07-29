#include "EffectProjectionBlood.h"
#include "Components/SceneComponent.h"

AEffectProjectionBlood::AEffectProjectionBlood(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("USceneComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->DrawBox = NULL;
    this->DrawMaterial = NULL;
    this->bAutoDelete = true;
    this->bDisplayArea = false;
}

void AEffectProjectionBlood::SetDisplayArea(bool display_area) {
}

void AEffectProjectionBlood::SetAutoDelete(bool auto_delete) {
}


