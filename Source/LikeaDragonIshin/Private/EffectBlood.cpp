#include "EffectBlood.h"
#include "Components/SceneComponent.h"

AEffectBlood::AEffectBlood(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("USceneComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->DrawBox = NULL;
    this->DrawMaterial = NULL;
}


